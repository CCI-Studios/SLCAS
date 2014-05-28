(function($) {
	$(function(){
		$("#block-system-main-menu li.expanded > a").click(menuClick);
	});

	$(window).load(function(){
		fixMenu();
		$(window).resize(fixMenu);
	});

	function menuClick()
	{
		if (isMobile()) return;

		var $li = $(this).parent();

		//close other submenus first
		$("#block-system-main-menu li.expanded.open").not($li).removeClass("open").find("> div").animate({"width":"toggle"});

		//toggle open for the clicked menu
		$li.toggleClass("open").find("> div").animate({"width":"toggle"});
		return false;
	}

	function isMobile()
	{
		return $(window).width() <= 805 || ($(window).width() == 1024 && $(window).height() <= 768) || $(window).height() <= 580;
	}

	function fixMenu()
	{
		$("#block-system-main-menu .content ul div").each(function(){
			var totalWidth = 5;
			$ul = $(this);
			var originalDisplay = $ul.css("display");
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
				"display":originalDisplay,
				"width":totalWidth+"px"
			});
			$ul.find("ul").width(totalWidth);
		});

		if (!isMobile())
		{
			$("#block-system-main-menu").show();
		}
	}
}(jQuery));
