(function($) {
    $(function(){
        $("#menu-btn").click(function(){
            $("#block-system-main-menu").slideToggle();
            return false;
        });

        $("#block-menu-menu-social-menu")
        .clone()
        .attr("id","block-menu-menu-social-menu-2")
        .appendTo("#block-system-main-menu");

        $("<a href='#' class='member-menu-btn'>Member Menu</a>")
        .click(memberMenuClick)
        .prependTo("#block-menu-menu-staff-menu, #block-menu-menu-board-member-menu, #block-menu-menu-foster-parent-and-volunteer");

        $("<a href='#' class='youth-zone-menu-btn'>Main Menu</a>")
        .click(youthZoneMenuClick)
        .prependTo("#block-menu-menu-child-and-youth-menu");
    });

    function memberMenuClick()
    {
        $("#block-menu-menu-staff-menu, #block-menu-menu-board-member-menu, #block-menu-menu-foster-parent-and-volunteer")
        .find("> .content")
        .slideToggle();
        $(this).toggleClass("open");
        return false;
    }

    function youthZoneMenuClick()
    {
        $("#block-menu-menu-child-and-youth-menu")
        .find("> .content")
        .slideToggle();
        $(this).toggleClass("open");
        return false;
    }
}(jQuery));
