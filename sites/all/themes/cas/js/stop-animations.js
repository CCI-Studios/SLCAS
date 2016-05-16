(function($) {
    $(function(){
        $("body.node-type-child-and-youth-page #block-menu-menu-child-and-youth-menu .content li.last")
        .before("<li class='leaf'><a href='#' id='stop-animations'>Stop Animations</a></li>");
        $("#stop-animations").click(stopAnimationsClick);
    });

    function stopAnimationsClick()
    {
        if ($("body").hasClass("stop-animation"))
        {
            $(this).text("Stop Animations");
        }
        else
        {
            $(this).text("Start Animations");
        }

        $("body").toggleClass("stop-animation");

        return false;
    }
}(jQuery));
