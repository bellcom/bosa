
jQuery(document).ready(function(){
  var height = jQuery('.views-field-field-offer-you-get').height();
  var open = false;

  var toggleText = function(){
    if (open === false) 
    {
      jQuery('.views-field-field-offer-you-get')
        .css('height',height);
      jQuery('#toggleText').toggleClass('open')
        .text(Drupal.t('Less information'));
      open = true;
    }
    else
    {
      jQuery('.views-field-field-offer-you-get')
        .css('height', '318px');
      jQuery('#toggleText').toggleClass('open')
        .text(Drupal.t('More information'));
      open = false;
    }
  }

  if(jQuery('.views-field-field-offer-you-get').height() > 290) {
    jQuery('.views-field-field-offer-you-get')
      .css('height','318px') 
      .css('overflow', 'hidden')
      .after('<div class="toggleTextDiv"><p id="toggleText">' + Drupal.t('More information') + '</p></div>');
    
  }

  jQuery('#toggleText').click(function(e){
    toggleText();
  });

});
