jQuery(window).load(function () {
    equalHeight(jQuery('.equal-height .node-jobs'));
});

jQuery(window).resize(function() {
    equalHeight(jQuery('.equal-height .node-jobs'));
});

var equalHeight = function (group) {
    var tallest = 0;
    var width = jQuery(window).width();
    group.height('100%');
    if (width > 560) {
        group.each(function () {
            var thisHeight = jQuery(this).height();
            if (thisHeight > tallest) {
                tallest = thisHeight;
            }
        });

        group.height(tallest);
    }
};