jQuery(document).ready(function($){
  $('.dexp-dropdown .menu li > a.active').each(function(){
    $(this).parents('li.expanded').addClass('active');
  });
})