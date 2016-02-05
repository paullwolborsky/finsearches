jQuery(document).ready(function($){
	
	$('.dtooltip').tooltip();
	//scroll to top
	$('#go-to-top').click(function(){
		$('html, body').animate({scrollTop: 0}, 800);
		return false;
	});
  
	//accordion menu
	$('.accordion-menu li.expanded').each(function() {
		var $this = $(this), $toggle = $('<span class="menu-toggler fa fa-angle-right"></span>');
		$toggle.click(function() {
			$(this).toggleClass('fa-angle-right fa-angle-down');
			$this.find('>ul').toggleClass('menu-open');
		});
		$this.append($toggle);
	});
	
});