#!/usr/bin/env bash

echo "Starting installation. This whole process can take 5-10 min (based on your internet speed and computer resources)"

# Use single quotes instead of double quotes to make it work with special-character passwords
PASSWORD='abcde123456'
export DEBIAN_FRONTEND=noninteractive
sudo debconf-set-selections <<< "mysql-server mysql-server/root_password password $PASSWORD"
sudo debconf-set-selections <<< "mysql-server mysql-server/root_password_again password $PASSWORD"
sudo debconf-set-selections <<< "phpmyadmin phpmyadmin/dbconfig-install boolean true"
sudo debconf-set-selections <<< "phpmyadmin phpmyadmin/app-password-confirm password $PASSWORD"
sudo debconf-set-selections <<< "phpmyadmin phpmyadmin/mysql/admin-pass password $PASSWORD"
sudo debconf-set-selections <<< "phpmyadmin phpmyadmin/mysql/app-pass password $PASSWORD"
sudo debconf-set-selections <<< "phpmyadmin phpmyadmin/reconfigure-webserver multiselect apache2"

echo "Updating package list. Takes 2-3 min"
apt-get update -qq
echo "Updating base system. Takes 2-3 min"
apt-get -qqfy upgrade

echo "Installing Server. This may take awhile."
apt-get -qq build-dep build-essential
apt-get install -qqfy mysql-server

apt-get install -qqfy apache2
apt-get install -qqfy php5
apt-get install -qqfy libapache2-mod-php5
apt-get install -qqfy php5-common

# Json is installed by common, but enumerated here for clarity.
apt-get install -qqfy php5-json
apt-get install -qqfy php5-readline
apt-get install -qqfy php5-cli
apt-get install -qqfy php-pear
apt-get install -qqfy php5-mysql
apt-get install -qqfy php5-gd
apt-get install -qqfy php5-curl
apt-get install -qqfy php-symfony-eventdispatcher
apt-get install -qqfy php-guzzle
apt-get install -qqfy php-console-table
apt-get install -qqfy drush

# for local testing only
apt-get install -qqfy php5-xhprof
apt-get install -qqfy php5-xdebug

# enable mod_rewrite
sudo a2enmod rewrite

# install git
sudo apt-get -qqfy install git

# install Composer
curl -s https://getcomposer.org/installer | php
sudo mv composer.phar /usr/local/bin/composer

cat > /etc/apache2/sites-available/000-default.conf <<'EOF'
<VirtualHost *:80>
	ServerAdmin webmaster@localhost
	DocumentRoot /vagrant
	<Directory />
		Options FollowSymLinks
		AllowOverride All
	</Directory>
	<Directory /vagrant>
		Options Indexes FollowSymLinks
		AllowOverride All
		Require all granted
	</Directory>
	ErrorLog ${APACHE_LOG_DIR}/error.log
	# Possible values include: debug, info, notice, warn, error, crit,
	# alert, emerg.
	LogLevel warn
	CustomLog ${APACHE_LOG_DIR}/access.log combined
</VirtualHost>
EOF

# install phpmyadmin and give password(s) to installer
# for simplicity I'm using the same password for mysql and phpmyadmin
sudo apt-get -qqfy install phpmyadmin

# Change user and group for apache
sed -i '/APACHE_RUN_USER/d' /etc/apache2/envvars
sed -i '/APACHE_RUN_GROUP/d' /etc/apache2/envvars

cat >> /etc/apache2/envvars <<'EOF'
# Apache user and group
export APACHE_RUN_USER=vagrant
export APACHE_RUN_GROUP=vagrant
EOF

# Fix premissions
if [ -d /var/lock/apache2 ]
	then
		chown -R vagrant:vagrant /var/lock/apache2
fi

# Enable rewrites
a2enmod rewrite

# Some changes to php.ini
sed -i 's/display_errors = Off/display_errors = On/g' /etc/php5/apache2/php.ini
sed -i 's/display_startup_errors = Off/display_startup_errors = On/g' /etc/php5/apache2/php.ini
sed -i 's/error_reporting = E_ALL & ~E_DEPRECATED/error_reporting = E_ALL/g' /etc/php5/apache2/php.ini
sed -i 's/track_errors = Off/track_errors = On/g' /etc/php5/apache2/php.ini
sed -i 's/html_errors = Off/html_errors = On/g' /etc/php5/apache2/php.ini

# Clean up
apt-get clean

# Restart services
service apache2 restart

printf "\n\n"
echo "Provision complete!"
