<?php
    $view = views_embed_view('testimonials', 'block_1');
    drupal_add_css('sites/all/themes/corposs/assets/css/pages/anon_front.css', array('group'=>CSS_THEME));
?>
<div id='home-anon' class='background'>
    <div id='header'>
        <div class='section-layer'>
            <div id='logo'>
                <img src='/sites/default/files/FIN-Searches-Logo-300x70.jpg' />
            </div>
            <div id='menu'>
                <ul>
                    <li class='menu-item'><a href='/'><span>HOME</span></a></li>
                    <li class='menu-item'><a href='/about-us'><span>ABOUT US</span></a></li>
                    <li class='menu-item'><a href='/contact-us'><span>CONTACT US</span></a></li>
                    <li class='user-item button'><a href='/user/login'><span>LOGIN</span></a></li>
                    <li class='user-item button'><a href='/user/register'><span>SIGN UP</span></a></li>
                </ul>
            </div>
        </div>
    </div>
    <div id='section-1' class='section'>
        <div class='section-layer section-layer-base'>
            <div id='main-intro'>
                <h1 class='thin white shadow'>Welcome</h1>
                <h1 class='thin white shadow'>to the new</h1>
                <h1 class='thick blue shadow'>fin searches</h1>
                <p class='thin white'>
                    FIN Searches is the most powerful and complete
                    sales and marketing tool available for the
                    institutional asset management indistry for defined
                    benefit plans, nonprofits and consultants.
                </p>
                <div id='buttons'>
                    <div id='upper-sign-up' class='button blue'><a href='/user/register'><span>SIGN UP FREE</span></a></div>
                    <div id='upper-login' class='button light-blue'><a href='/user/login'><span>LOGIN</span></a></div>
                </div>
            </div>
            <div id='upper-screenshots'>
                <div class='inner'>
                    <div class='back'><img src='/sites/all/themes/corposs/assets/images/front/screen-shot-2.jpg' /></div>
                    <div class='front'><img src='/sites/all/themes/corposs/assets/images/front/screen-shot-3.jpg' /></div>
                </div>
            </div>
        </div>
    </div>
    <div id='section-2' class='section'>
        <div class='section-layer section-layer-base'>
            <h1 class='center thin'>We provide accurate and fast financial news to our subscribers.</h1>
            <ul id='content'>
              <li>
                <h3>Mandates</h3>
                <p>Each year FIN Searches focuses on enhancing it's internal capabilities to grab a larger share of the search market.</p>
              </li>
              <li>
                <h3>Plans</h3>
                <p>We have coverage for more than 10,000 institutional plans. That allows your firm to focus on key clients and potential relationships.</p>
              </li>
              <li>
                <h3>Consultants</h3>
                <p>Our unparalleled coverage of institutional consultants ensures that you not only gain unique insights into their investment recommendations but also into their staffs.</p>
              </li>
              <li>
                <h3>Mandate Range</h3>
                <p>We offer coverage on a varity of mandate ranges, focusing on large profiles with accounts covering more than $1 billion dollars.</p>
              </li>
            </ul>
        </div>
    </div>
    <div id='section-3' class='section'>
        <div class='section-layer section-layer-base'>
            <h1 class='center thin blue'>The most comprehensive and up-to-date coverage - in an easy to use database.</h1>
            <h4 class='thin subtitle gray'>See how our user-friendly online tool helps you find information fast and easy.</h4>
            <div class='center img'>
                <img src='/sites/all/themes/corposs/assets/images/front/screen-shot-4.jpg' />
            </div>
        </div>
    </div>
    <div id='section-4' class='section'>
        <div class='section-layer section-layer-base'>
            <h1 class='center thin blue'>Client Testimonials</h1>
            <?php print $view;?>
        </div>
    </div>
    <div id='section-5' class='section'>
        <div class='section-layer section-layer-base'>
            <h1 class='thin white shadow'>We're a team of reporters with deep financial expertise, creating original daily content to better assist individuals and teams.</h1>
            <div class='button blue'><a href='/about-us'><span class='thick white'>MEET THE TEAM</span></a></div>
        </div>
    </div>
    <div id='section-6' class='section'>
        <div class='section-layer section-layer-base'>
            <div class='half'>
                <div class='column'>
                    <ul>
                        <li>Using Searches</li>  
                        <li><a href='/'>Product</a></li>  
                        <li><a href='/'>Features</a></li>  
                        <li><a href='/'>Support</a></li>  
                        <li><a href='/'>Tutorials</a></li>  
                    </ul>
                </div>
                <div class='column'>
                    <ul>
                        <li>Fin News</li>  
                        <li><a href='/'>Home</a></li>  
                        <li><a href='/about-us'>About Us</a></li>  
                        <li><a href='/contact-us'>Contact Us</a></li>  
                    </ul>
                </div>
                <div class='column'>
                    <ul>
                        <li>Legal</li>  
                        <li><a href='/terms-use'>Terms</a></li>  
                        <li><a href='/copyright'>Copyright</a></li>  
                        <li><a href='/privacy-policy'>Privacy Policy</a></li>  
                    </ul>
                </div>
            </div>
            <div id='copyright'>&copy; 2005-2016 FINsearches.com is an information service of Financial Investment News, a division of GRLM, LLC</div>
        </div>
    </div>
</div>
