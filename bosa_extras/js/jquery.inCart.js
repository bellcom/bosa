jQuery('document').ready(function($){
  $('.views-field-line-item-label').each(function(e) {
  var text = $(this).text().trim();
  $('.hiddentitle').filter(function(e){
    return $(this).html().trim() == text;
    }).parent().addClass('in_cart');
  });
});
