(function ($) {
  "use strict";

  Drupal.behaviors.twentyfifteenContent = {
    attach: function () {
      document.documentElement.className = 'js';

      var articles = $('#block-system-main article.hentry');

      // Add class "hentry" for block system content if on page not havent
      // articles.
      if (articles.length == 0) {
        $('#block-system-main').addClass('hentry');
      }

      // Class for all article except first.
      $('.view .view-content .views-row article.hentry:not(:first)').addClass('not-first');
    }
  };
})(jQuery);
