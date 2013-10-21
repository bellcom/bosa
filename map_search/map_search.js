(function($){
  Drupal.behaviors.mapsearch = {
    attach: function (context) {
      var eClass,
          i,
          term,
          mapUrl = $('.pane-map-search-map-search-vid-7').find('img').attr('src');

      function changeMap(termId, reset) {
        if(reset) {
            $('.pane-map-search-map-search-vid-7').find('img').attr('src', mapUrl);
        }
        if(termId !== null) {
            newMapUrl = mapUrl.split(".");
            newMapUrl = newMapUrl[0] + "-" + termId + ".png";
            $('.pane-map-search-map-search-vid-7').find('img').attr('src', newMapUrl);
        }
      }


  $('.pane-kategorivisning').find("[class*=term]").find('a').each(function(){
    $(this).hover(
        function(){
            eClass = $(this).parent().attr('class').split(" ");
            for(i = 0; i < eClass.length; i++) {
                if(eClass[i].indexOf('term') !== -1) {
                    changeMap(eClass[i], null);
                }
            }
        },
        function(){
            changeMap(null, true);
        }
    );
  });
  
  $('.pane-map-search-map-search-vid-7').find('area').each(function(){
    $(this).hover(
        function() {
            term = $(this).attr('id');
            $('.pane-kategorivisning').find('.'+term).find('a').addClass("active");
            changeMap(term, null);
        },
        function() {
            $('.pane-kategorivisning').find('.'+term).find('a').removeClass("active");
            changeMap(null, true);
        }
      );
    });
  }
}
}(jQuery));
