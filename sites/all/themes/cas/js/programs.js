(function($) {
	$(function(){
		$("#content .view-programs-and-services-menu a").click(function(){
			gotoProgram($(this).data("nid"));
			return false;
		});

		$("#block-views-q-as-header-block a").click(click);
	});

	function gotoProgram(nid)
	{
		var $target = $("#nid-"+nid);

		var offset = $target.offset();
		var top = parseInt(offset.top)-50;
		$("html, body").animate({
			"scrollTop":top+"px"
		});
	}

	function click()
	{
		$(document).scrollTop( $($(this).attr("href")).offset().top - 50 );
		return false;
	}

}(jQuery));
