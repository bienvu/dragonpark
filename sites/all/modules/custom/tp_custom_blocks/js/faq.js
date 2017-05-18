(function($, undefined) {
  Drupal.behaviors.tp_faq = {
    attach: function(context, settings) {
      $("document").ready(function () {

        $('.txt-faq').on("keyup", function () {
          var searchText = $(this).val();
          searchText = searchText.toLowerCase();
          searchText = searchText.replace(/\s+/g, '');
          $('.box-accordion__item').each(function(){
            var currentLiText = $(this).text(),
              showCurrentLi = ((currentLiText.toLowerCase()).replace(/\s+/g, '')).indexOf(searchText) !== -1;
            $(this).toggle(showCurrentLi);
          });
        });
      });
    }
  }
})(jQuery);
