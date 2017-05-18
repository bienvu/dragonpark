/*jslint browser: true*/
/*global $, jQuery, Modernizr, enquire*/
(function (window, document, $) {
  var $html = $('html'),
    mobileOnly = "screen and (max-width:47.9375em)", // 767px.
    mobileLandscape = "(min-width:30em)", // 480px.
    tablet = "(min-width:48em)"; // 768px.
  // Add  functionality here.

  // Add  functionality here.
  // Select js.
  // Tooltip
      $('select').selectpicker();

  // $( document ).ready(function() {
  //   $(".box-map__content__body").niceScroll();
  //   $(".box-map__content__body").scroll(function(){
  //     $(".box-map__content__body").getNiceScroll().resize();
  //   });
  // });

      var defaultSlickOptions = {
        dots: true,
        infinite: !0,
        arrows: false,
        speed: 1000,
        slidesToShow: 2,
        slidesToScroll: 1,
        autoplay: false,
        autoplaySpeed: 1000,
        responsive: [
          {
            breakpoint: 640,
            settings: {
              slidesToShow: 1,
              slidesToScroll: 1
            }
          }
        ]
      };
      $('.js-slide-content').slick(defaultSlickOptions);

      var attractionSlickOptions = {
        dots: false,
        infinite: true,
        arrows: true,
        speed: 1000,
        slidesToShow: 4,
        slidesToScroll: 1,
        autoplay: false,
        autoplaySpeed: 1000,
        responsive: [
          {
            breakpoint: 640,
            settings: {
              slidesToShow: 1,
              slidesToScroll: 1
            }
          },
          {
            breakpoint: 768,
            settings: {
              slidesToShow: 2,
              slidesToScroll: 1
            }
          },
          {
            breakpoint: 1024,
            settings: {
              slidesToShow: 3,
              slidesToScroll: 1
            }
          }
        ]
      };
      $('.box-attractions__list').slick(attractionSlickOptions);

      var slideattractionSlickOptions = {
        dots: false,
        infinite: true,
        arrows: true,
        speed: 1000,
        slidesToShow: 1,
        slidesToScroll: 1,
        autoplay: false,
        autoplaySpeed: 1000
      };
      $('.js-slide-attraction').slick(slideattractionSlickOptions);

  //Js accordion
  var accordionFunction = function(classItem, childSelector) {
    var $item = classItem;
    $item.on('click', function () {
      var $this = $(this);
          $childSelector = $this.next(childSelector);
      if (!$this.hasClass('is-active')) {
        $this.addClass('is-active');
        $childSelector.addClass('is-active');
        $childSelector.slideDown("slow");
      }
      else {
        $this.removeClass('is-active');
        $childSelector.removeClass('is-active');
        $childSelector.slideUp("slow");
      }
    });
  };

  var $classItem = $('.js-direct'),
      $childSelector = $('.js-show');
  accordionFunction($classItem,$childSelector);

  // Tab js
  $('.js-block-tab-switcher').on('click', function(e) {
      var $this = $(this),
          $data = $this.attr('data-index'),
          tabsWrapper = $this.parent().siblings('.block-tabs__container'),
          matchingTab = tabsWrapper.find('*[data-index=' + $data + ']'),
          restSwitches = $this.siblings(),
          restTabs = matchingTab.siblings();

      e.preventDefault();
      restTabs.removeClass('active');
      restSwitches.removeClass('active');
      $this.addClass('active');
      matchingTab.addClass('active');
    });

  // Header scroll
  var classMode = 'is-active',
      $header = $('.header__top'),
  stickyFunctional = function () {
    if ($(window).scrollTop() > 0) {
      $header.addClass(classMode);
    } else {
      $header.removeClass(classMode);
    }
  };
  $(window).on('scroll', stickyFunctional).resize();

  // Js back to top.
  var $scrollTopLink = $('.js-back-to-top a');
  $scrollTopLink.click(function() {
    $('body,html').animate({
      scrollTop: 0
    }, 800);
    return false;
  });

  // Search field toggler.
  var $searchBtn = $('.block-search .form-submit'),
    topSearchFlag = 'show-search-box',
    $topSearchWrapper = $('.block-search'),
    $searchInput = $('.form-text', $topSearchWrapper);

  $searchBtn.on('click', function(e) {
    if(!$topSearchWrapper.hasClass(topSearchFlag)) {
      e.preventDefault();
      $topSearchWrapper.addClass(topSearchFlag);
      $searchInput.focus();
    }
  });

  $(document).on('touchstart click', function (e) {
    if (!$topSearchWrapper.is(e.target) && $topSearchWrapper.has(e.target).length === 0) {
      $searchInput.blur();
      $topSearchWrapper.removeClass(topSearchFlag);
    }
  });

  // Toggle mobile menu.
  var toggleFunction = function (btn, btnClose ,flag) {
    var $btn = btn,
        $btnClose = btnClose,
        $parent = $('.header__menu');
    $(document).on('touchstart click', function (e) {
      if ($('.header__icon-menu').has(e.target).length === 0 && $parent.hasClass(flag)) {
        $parent.removeClass(flag);
        $('html').removeClass(flag);
      }
    });

    $btn.on('click', function () {
      if (!$parent.hasClass(flag)) {
        $parent.addClass(flag);
        $('html').addClass(flag);
      }
      else {
        $parent.removeClass(flag);
        $('html').removeClass(flag);
      }
    });

    $btnClose.on('click', function () {
      $parent.removeClass(flag);
      $('html').removeClass(flag);
    });
  };

  //Show hidden menu-info.
  var openFlag = 'is-active',
      $open = $('.menu-icon'),
      $close = $('.menu-close');
  toggleFunction($open, $close, openFlag);


  // Toggle submenu
  $('.navigation .expanded > ul').before('<span class="expand-icon fa fa-angle-down"></span>');
  var accordionFunction = function(classItem) {
    var $item = classItem;
    $item.on('click', function () {
      var $this = $(this);
          $childSelector = $this.next();
      if (!$this.hasClass('is-active')) {
        $this.addClass('is-active');
        $this.addClass('fa-angle-up');
        $this.removeClass('fa-angle-down');
        $childSelector.addClass('is-active');
        $childSelector.slideDown("slow");
      }
      else {
        $this.removeClass('is-active');
        $this.removeClass('fa-angle-up');
        $this.addClass('fa-angle-down');
        $childSelector.removeClass('is-active');
        $childSelector.slideUp("slow");
      }
    });
  };

  var $classItem = $('.expand-icon');
  accordionFunction($classItem);


  // Date number
  var $dateFomat = $('.box-schedule__month'),
  dateFormat = function(className) {
    var number = className.text(),
      num = number.replace(/\s/g, ''),
      result = "";

    while (num.length > 0)
    {
      result = result + " " + num.substring(0,3);
        num = num.substring(3);
    }
    className.text(result);
  };
  $dateFomat.each(function(){
    var $phoneClass = $(this);
    dateFormat($phoneClass);
  });


  // Slide Explore
  $('.js-full-slide').slick({
    slidesToShow: 1,
    slidesToScroll: 1,
    arrows: false,
    fade: true,
    dots: false,
    autoplay: false,
    autoplaySpeed: 5000,
  });
  $('.box-explore__list li').each(function() {
    var $this = $(this);
    if(!$this.hasClass('is-active')) {
      $this.click(function(){
        $('.box-explore__list li').removeClass('is-active');
        $('.box-explore__list li').removeClass('active');
        $this.parents('.box-explore').find(".js-full-slide").slick("slickPrev");
        $this.addClass('is-active');
      });
    }
  });

  // Slide video
  $('.js-hero-slide').slick({
    slidesToShow: 1,
    slidesToScroll: 1,
    arrows: false,
    fade: true,
    dots: true,
    autoplay: true,
    autoplaySpeed: 5000
  });

  $('.js-hero-slide').on('afterChange', function(event, slick, currentSlide) {
    if (currentSlide == 5) {
      $('.js-hero-slide').slick('slickPause');
      theVideo.play();
    }
  });
  function myHandler(e) {
    $('.js-hero-slide').slick('slickPlay');
  };
  document.getElementById('theVideo').addEventListener('ended', myHandler, false);


}(this, this.document, this.jQuery));
