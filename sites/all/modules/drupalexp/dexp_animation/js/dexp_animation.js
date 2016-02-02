jQuery(document).ready(function($) {
    $(".dexp-animate").each(function() {
        var $this = $(this);
        if ($('body').hasClass('mobile')) {
            $this.removeClass('dexp-animate');
        } else {
            var animate_class = $this.data('animate'), delay = $this.data('animate-delay') || 0;
            $this.appear(function() {
                setTimeout(function() {
                    $this.addClass('animated').addClass(animate_class);
                }, delay);
            }, {
                accX: 0,
                accY: 0,
                one: true
            });
        }
    });
});
