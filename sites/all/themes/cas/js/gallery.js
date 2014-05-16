(function($) {
    $(function(){
        galleryPositions();
        $(window).resize(galleryPositions);

        $("#block-views-child-and-youth-gallery-block .arrow-left").click(clickPrevious);
        $("#block-views-child-and-youth-gallery-block .arrow-right").click(clickNext);
    });

    function galleryPositions()
    {
        var width = getWidth();
        $("#block-views-child-and-youth-gallery-block .views-row").each(function(i){
            $(this).css("left", width*i+"px");
        });
    }

    function clickPrevious()
    {
        stop();
        var left = parseInt($("#block-views-child-and-youth-gallery-block .view-content").css("left"))/getWidth()*100;
        console.log("current left:"+left);
        if (left < 0)
        {
            left += 100;
        }
        console.log("new left:"+left);
        $("#block-views-child-and-youth-gallery-block .view-content").animate({
            "left":left+"%"
        });
        return false;
    }

    function clickNext()
    {
        stop();
        var left = parseInt($("#block-views-child-and-youth-gallery-block .view-content").css("left"))/getWidth()*100;
        console.log("current left:"+left);
        if (left > ($("#block-views-child-and-youth-gallery-block .views-row").length-1)*-100)
        {
            left -= 100;
        }
        console.log("new left:"+left);
        $("#block-views-child-and-youth-gallery-block .view-content").animate({
            "left":left+"%"
        });
        return false;
    }

    function getWidth()
    {
        return $("#block-views-child-and-youth-gallery-block").width();
    }

    function stop()
    {
        $("#block-views-child-and-youth-gallery-block .view-content").stop(true, true);
    }
}(jQuery));
