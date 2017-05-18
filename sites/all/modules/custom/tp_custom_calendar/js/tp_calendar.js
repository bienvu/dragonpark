(function($, undefined) {
  Drupal.behaviors.tp_faq = {
    attach: function(context, settings) {
      $("document").ready(function () {
        $('.month .use-ajax').click(function(e){
          $('.month .use-ajax').removeClass('active');
          $(this).addClass('active');
        });

      });
    }
  }
})(jQuery);
