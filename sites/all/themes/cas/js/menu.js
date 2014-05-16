(function($) {
	$(function(){
		$("#block-system-main-menu .content > div > ul > li").hover(
			function(){
				$(this).find("div").stop(true,true).animate({"width":"toggle"});
			},
			function(){
				$(this).find("div").stop(true,true).animate({"width":"toggle"}, 200);
			}
		)
		.find("div").hide();
	});

	$(window).load(function(){
		fixMenu();
		$(window).resize(fixMenu);
	});

	function fixMenu()
	{
		$("#block-system-main-menu .content ul div").each(function(){
			var totalWidth = 0;
			$ul = $(this);
			$ul.css({
				"width":"1200px",
				"display":"block"
			})
			.find("li").each(function(){
				totalWidth += $(this).outerWidth();
				$(this).css("padding-top",($ul.outerHeight()-$(this).find("a").outerHeight()-3)/2+"px");
				$(this).css("padding-bottom",($ul.outerHeight()-$(this).find("a").outerHeight()-3)/2+"px");
			});

			$ul.addClass("layout-fixed").css({
				"display":"",
				"width":totalWidth+"px"
			});
			$ul.find("ul").width(totalWidth);
		});
	}
}(jQuery));
