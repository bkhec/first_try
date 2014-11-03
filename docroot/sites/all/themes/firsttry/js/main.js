jQuery(document).ready(function($){
	var $timeline_block = $('ul.timeline');
    console.log($timeline_block);

	//hide timeline blocks which are outside the viewport
	$timeline_block.each(function(){
        console.log($(this));
		if($(this).offset().top > $(window).scrollTop()+$(window).height()*0.75) {
            alert("hide");
			$(this).find('.views-row').addClass('is-hidden');
		}
	});

	//on scolling, show/animate timeline blocks when enter the viewport
	$(window).on('scroll', function(){
		$timeline_block.each(function(){
			if( $(this).offset().top <= $(window).scrollTop()+$(window).height()*0.75 && $(this).find('.timeline-badge').hasClass('is-hidden') ) {
				$(this).find('.timeline-badge, .timeline-panel').removeClass('is-hidden').addClass('bounce-in');
                alert("bounce");
			}
		});
	});
});