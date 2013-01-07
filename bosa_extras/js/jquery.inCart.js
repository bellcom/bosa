jQuery('document').ready(function($){
  $('.views-field-line-item-title').each(function(e) {
  var text = $(this).text().trim();
  console.log(text);
  $('.hiddentitle').filter(function(e){
    return  $(this).html().trim() == text;
    }).parent().addClass('in_cart');
  });
});
