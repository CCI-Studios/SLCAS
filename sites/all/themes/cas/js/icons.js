(function($) {
    $(function(){
        var icon = $("#block-system-main .field-name-field-background-icon .field-item").text();
        if ($("body").hasClass("node-type-news-and-events"))
            icon = "news";
        if ($("body").hasClass("user-login")
        || $("body").hasClass("node-type-staff-page")
        || $("body").hasClass("node-type-board-page")
        || $("body").hasClass("node-type-forum")
        || $("body").hasClass("page-forum")
        || $("body").hasClass("node-type-foster-parent-and-volunteer-page"))
                icon = "login";

        switch(icon)
        {
        case "Form":
            icon = "form";
            break;
        case "Document":
            icon = "document";
            break;
        case "News":
            icon = "news";
            break;
        case "Hand":
            icon = "hand";
            break;
        case "Hands":
            icon = "hands";
            break;
        case "Login":
            icon = "login";
            break;
        case "Resources":
            icon = "resources";
            break;
        case "Foster":
            icon = "foster";
            break;
        }

        if (icon)
        {
            var bg_url = "/sites/all/themes/cas/images/bg-page-"+icon+".png";
            $("#content").css("background-image","url("+bg_url+")");

            var title_url = "/sites/all/themes/cas/images/icon-title-"+icon+".png";
            $("<img src='"+title_url+"' alt='' />").prependTo("#page-title h1");
        }
    });
}(jQuery));
