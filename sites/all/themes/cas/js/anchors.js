(function($) {
    $(function(){
        $("#block-system-main a[href^=#]").click(function(e){
            var offset = $($(this).attr("href")).offset().top;

            $('html, body').animate({
                scrollTop: offset-50
            }, 500);

            e.preventDefault();
        });
    });
}(jQuery));
