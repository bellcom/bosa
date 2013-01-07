jQuery(document).ready(function(){
  jQuery( "#edit-created" ).datepicker({
      autoSize: true
    }).attr("readonly", true);

  jQuery( "#edit-created-1" ).datepicker({
      autoSize: true
    }).attr("readonly", true);
  jQuery( "#edit-created-1" ).datepicker("option", "dateFormat", "yy-mm-dd");
  jQuery( "#edit-created" ).datepicker("option", "dateFormat", "yy-mm-dd");
});
