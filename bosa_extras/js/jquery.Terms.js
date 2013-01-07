jQuery('document').ready(function($){
  var terms = Drupal.settings.bosa_extras.terms;
  console.log(terms);

  $(".form-item-customer-profile-billing-field-conditions-und").append('<div id="termsandconditions"><div class="close">Luk</div>' + terms + '</div>');

  $("#termsandconditions").hide();

  $("#terms-and-conditions").click(function(event){
    event.preventDefault;
    $("#termsandconditions").toggle();
  });

  $(".close").click(function(e){
    $("#termsandconditions").toggle();
  });
});
