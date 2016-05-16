(function($) {
	var $slideshow_block;
	var slideshow_timer;

	$(function(){
		$slideshow_block = $("#block-views-header-slideshow-block");
		$("<ul id='indicators'></ul>").appendTo($slideshow_block);
		$slideshow_block.find(".views-row").each(function(i){
			var classes = "indicator-"+i;
			if (i === 0)
				classes += " active"
			$("<li class='"+classes+"' tabindex='0'></li>")
			.click(function(){
				indicatorClick(i);
			})
			.on("keydown", function(e){
				if (e.keyCode == 13)
				{
					indicatorClick(i);
				}
			})
			.appendTo("#indicators");
		});

		slideshow_timer = setInterval(next, 12000);
	});

	function indicatorClick(i)
	{
		stop();
		changeSlide(i);
	}

	function getActiveIndex()
	{
		return $("#indicators .active").index();
	}

	function next()
	{
		var currentIndex = getActiveIndex();
		var nextIndex = currentIndex+1;
		if (nextIndex >= $slideshow_block.find(".views-row").length)
		{
			nextIndex = 0;
		}
		changeSlide(nextIndex);
	}

	function changeSlide(nextIndex)
	{
		var currentIndex = getActiveIndex();
		var $current = $slideshow_block.find(".views-row-"+(currentIndex+1));
		var $next = $slideshow_block.find(".views-row-"+(nextIndex+1));

		$("#indicators .indicator-"+currentIndex).removeClass("active");
		$("#indicators .indicator-"+nextIndex).addClass("active");

		$slideshow_block
		.find(".views-row")
		.stop(true, true)
		.css({"z-index":"0"});

		$current.css("z-index","1");
		$next.css({
			"opacity":"0",
			"z-index":"2"
		})
		.animate({
			"opacity":"1"
		});
	}

	function stop()
	{
		clearInterval(slideshow_timer);
	}
}(jQuery));
