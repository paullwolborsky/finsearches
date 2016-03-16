# -*- mode: ruby -*-
# vi: set ft=ruby :

# Vagrantfile API/syntax version. Don't touch unless you know what you're doing!
VAGRANTFILE_API_VERSION = "2"

Vagrant.configure(VAGRANTFILE_API_VERSION) do |config|

  #Default options, can be overridden by each host.
  config.vm.provider "virtualbox" do |vb|
    # Don't boot with headless mode
    vb.gui = false
    vb.memory = 1024
    vb.cpus = 2
    # Set time re-sync threshold to 10 second drift.
    vb.customize ["guestproperty", "set", :id, "/VirtualBox/GuestAdd/VBoxService/--timesync-set-threshold", 10000]
  end

  # Default box for everyone.
  config.vm.box = "ubuntu/trusty64"
  
  
  config.vm.define "fin" do |fin|
    fin.vm.hostname = "finsearches.local"
    fin.vm.network "forwarded_port", guest: 80, host: 8080
    fin.vm.network "forwarded_port", guest: 3306, host: 3306
    fin.vm.provision "shell", path: "VagrantProvision.sh"
  end
end
