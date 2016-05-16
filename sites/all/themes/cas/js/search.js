(function($) {
	$(window).load(function(){
		$("#block-search-form").prepend("<a href='#' class='search-btn' title='Search'>Search</a>");

		$("#block-search-form a.search-btn").click(function(){
			if ($("#block-search-form form").width() == 0 || $("#block-search-form form").css("display") == "none")
			{
				var width = getWidth($(this).parent());
				$("#block-search-form form").css({
					"display":"block",
					"width":"0"
				})
				.animate({
					"width":width+"px"
				});
				$("#edit-search-block-form--2").focus();
			}

			return false;
		})
		.parent().find("#edit-search-block-form--2").blur(function(){
			$("#block-search-form form").animate({
				"width":"toggle"
			});
		});


		$("#footer-search").prepend("<a href='#' class='search-btn' title='Search'>Search</a>");
		$("#footer-search a.search-btn").click(function(){
			if ($("#footer-search form").width() == 0 || $("#footer-search form").css("display") == "none")
			{
				var width = 196;
				$("#footer-search form").css({
					"display":"block",
					"width":"0"
				})
				.animate({
					"width":width+"px"
				});
				$("#edit-search-block-form--4").focus();
			}

			return false;
		})
		.parent().find("#edit-search-block-form--4").blur(function(){
			$("#footer-search form").animate({
				"width":"toggle"
			});
		});
	});

	function getWidth($form)
	{
		var width = 0;
		$form.parent().children().not("#block-menu-menu-social-menu").each(function(){
			width += $(this).outerWidth();
		});
		return width;
	}
}(jQuery));
