/*jslint browser: true*/
/*global $, jQuery, Modernizr, enquire*/
(function (window, document, $, Drupal) {
  "use strict";

  var Drupal = Drupal || { 'settings': {}, 'behaviors': {}, 'locale': {} },
    $html = $('html'),
    mobileOnly = "screen and (max-width:47.9375em)", // 767px.
    mobileLandscape = "(min-width:30em)", // 480px.
    tablet = "(min-width:48em)"; // 768px.

  // Select js.
  Drupal.behaviors.selectpicker = {
    attach: function() {
      $('select').selectpicker();
    }
  };

  Drupal.behaviors.slickSlide = {
    attach: function() {
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
      $('.js-slide-content .view-content').slick(defaultSlickOptions);

      // Slide attraction homepage.
      var slideattractionSlickOptions = {
        slidesToShow: 1,
        slidesToScroll: 1,
        arrows: false,
        fade: true,
        dots: false,
        autoplay: true,
        autoplaySpeed: 5000,
        adaptiveHeight: true
      };
      $('.js-slide-attraction').slick(slideattractionSlickOptions);
      $('.js-full-slide').slick(slideattractionSlickOptions);

      $('.arrows-prev').click(function() {
        $(this).parents('.box-image-attraction').find(".js-full-slide").slick("slickPrev");
        $(this).parents('.box-image-attraction').find(".js-slide-attraction").slick("slickPrev");
      });

      $('.arrows-next').click(function(){
        $(this).parents('.box-image-attraction').find(".js-full-slide").slick("slickNext");
        $(this).parents('.box-image-attraction').find(".js-slide-attraction").slick("slickNext");
      });
      // Slide zone.
      var $slideZone = $('.js-intro-slide');
      $slideZone.slick({
        slidesToShow: 1,
        slidesToScroll: 1,
        arrows: true,
        fade: true,
        dots: false,
        autoplay: true,
        autoplaySpeed: 5000
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
        $('.box-hero-slide__small-title').removeClass('bounceInDown');
        $('.box-hero-slide__title').removeClass('bounceInDown');
        $('.box-hero-slide__title').removeClass('bounceInUp');
        $('.box-hero-slide__title').removeClass('bounceInLeft');
        $('.box-hero-slide__title').removeClass('bounceInRight');
        $('.box-hero-slide__title').removeClass('flipInX');
        $('.box-hero-slide__title').removeClass('fadeInDown');
        $('.box-hero-slide__body').removeClass('fadeInUp');
        $('.box-hero-slide__body').removeClass('bounceInLeft');
        $('.box-hero-slide__body').removeClass('bounceInRight');
        $('.box-hero-slide__body').removeClass('bounceInDown');
        $('.box-hero-slide__body').removeClass('bounceInUp');

        if (currentSlide == 0) {
          var $this = $(this);
          $this.find('.box-hero-slide__small-title').addClass('bounceInDown');
          $this.find('.box-hero-slide__title').addClass('bounceInDown');
          $this.find('.box-hero-slide__body').addClass('bounceInUp');
        }

        if (currentSlide == 1) {
          var $this = $(this);
          $this.find('.box-hero-slide__title').addClass('bounceInRight');
          $this.find('.box-hero-slide__body').addClass('bounceInLeft');
        }

        if (currentSlide == 2) {
          var $this = $(this);
          $this.find('.box-hero-slide__title').addClass('flipInX');
          $this.find('.box-hero-slide__body').addClass('flipInX');
        }

        if (currentSlide == 3) {
          var $this = $(this);
          $this.find('.box-hero-slide__title').addClass('bounceInDown');
          $this.find('.box-hero-slide__body').addClass('bounceInDown');
        }
      });
      // if (document.getElementById('theVideo')) {
      //   document.getElementById('theVideo').play();
      // }
      if (document.getElementById('theVideo')) {
        document.getElementById('theVideo').play();
        $('.play-video').click(function (e) {
          $(this).toggleClass('pause');
          if ($("#theVideo").get(0).paused) {
            $("#theVideo").get(0).play();
          } else {
            $("#theVideo").get(0).pause();
          }
          event.preventDefault();
        });
      }

    }
  };

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

  // Scroll
  var $calendarInfo = $('.pane-tp-custom-calendar-opening-hour');
  if($calendarInfo.length) {
    var $calendarInfoOffsetTop = $calendarInfo.offset().top;
    $('.month a').on('touchstart click', function (e) {
      $('body,html').animate({
        scrollTop: $calendarInfoOffsetTop - 50
      }, 800);
    });
  }

  // Search field toggler.
  var $searchBtn = $('.block-search .form-submit'),
    topSearchFlag = 'is-active',
    $topSearchWrapper = $('.block-search'),
    $headerSocial = $('.header__social'),
    $searchInput = $('.form-text', $topSearchWrapper);

  $searchBtn.on('click', function(e) {
    if(!$topSearchWrapper.hasClass(topSearchFlag)) {
      e.preventDefault();
      $topSearchWrapper.addClass(topSearchFlag);
      $headerSocial.addClass(topSearchFlag);
      $searchInput.focus();
    }
  });

  $(document).on('touchstart click', function (e) {
    if (!$topSearchWrapper.is(e.target) && $topSearchWrapper.has(e.target).length === 0) {
      $searchInput.blur();
      $topSearchWrapper.removeClass(topSearchFlag);
      $headerSocial.removeClass(topSearchFlag);
    }
  });

  // Toggle mobile menu.
  var toggleFunction = function (btn, btnClose ,flag) {
    var $btn = btn,
      $btnClose = btnClose,
      $parents = $btn.parent(),
      $parent = $btn.next();
    $(document).on('touchstart click', function (e) {
      if ($parents.has(e.target).length === 0 && $parent.hasClass(flag)) {
        $parent.removeClass(flag);
        $('html').removeClass(flag);
        $btn.removeClass(flag);
      }
    });

    $btn.on('click', function () {
      $(this).toggleClass(flag);
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
    $openLanguage = $('.language-icon'),
    $close = $('.menu-close');
  toggleFunction($open, $close, openFlag);
  toggleFunction($openLanguage, $close, openFlag);

  // Js click map.
  var $map = $('.box-gmap');
  $map.on('touchstart click', function (e) {
    $('.box-gmap').addClass('is-active');
  });
  $(document).on('touchstart click', function (e) {
    if ($('.pane-bean-contact-map').has(e.target).length === 0 && $map.hasClass('is-active')) {
      $map.removeClass('is-active');
    }
  });

  // Toggle submenu
  $('.navigation .expanded > ul').before('<span class="expand-icon fa fa-angle-down"></span>');
  var accordionFunction1 = function(classItem) {
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

  var $classItem1 = $('.expand-icon');
  accordionFunction1($classItem1);

  // Explore when hover
  $('.js-hover li').each(function() {
    var $this = $(this),
      $thisChirld = $(this).find('.image');
    if(!$this.hasClass('is-active')) {
      $thisChirld.on('touchstart mouseover', function (e) {
        $('.box-explore__list li').removeClass('is-active');
        $('.box-explore__list li').removeClass('active');
        $this.addClass('is-active');
      });
    }
  });

    // Add placeholder for search form.
  $('.block-search .form-text').attr('placeholder','Search');

  // Video auto height with window.
  var heightWD = $(window).height(),
    widthWD = $(window).width();
  if (widthWD > 1024) {
    $('.js-hero-slide').css("height", heightWD);
  }

  // HOVER on location.
  var $location = $('.box-location__link li'),
    $locaitonIcon = $('.box-location__icon li');
  $location.hover(function(){
    var $locationIndex = ($(this).index());
    $locaitonIcon.removeClass('is-active');
    $locaitonIcon.eq($locationIndex).addClass('is-active');
  });

  $location.on('click', function(e) {
    if(touchtime == 0) {
      //set first click
      touchtime = new Date().getTime();
      var $locationIndex = ($(this).index());
      $locaitonIcon.removeClass('is-active');
      $locaitonIcon.eq($locationIndex).addClass('is-active');
      e.preventDefault();
    } else {
      //compare first click to this click and see if they occurred within double click threshold
      if(((new Date().getTime())-touchtime) < 800) {
        //double click occurred
        touchtime = 0;
      } else {
        //not a double click so set as a new first click
        touchtime = new Date().getTime();
        var $locationIndex = ($(this).index());
        $locaitonIcon.removeClass('is-active');
        $locaitonIcon.eq($locationIndex).addClass('is-active');
        e.preventDefault();
      }
    }
  });

  // HOVER on Service.
  var $serviceItem = $('.box-grid-service__item');
  $serviceItem.hover(function(){
    $serviceItem.removeClass('next-item pre-item');
    $(this).nextAll('div').addClass('next-item');
    $(this).prevAll('div').addClass('pre-item');
  });

  // Icon Draw.
  var $gate0 = $('#gate0'),
    $gate1 = $('#gate1'),
    $service0 = $('#service0'),
    $service1 = $('#service1'),
    $service2 = $('#service2'),
    $service3 = $('#service3'),
    $service4 = $('#service4');

  $gate0.lazylinepainter({
    'svgData': svgData,
    'strokeWidth': 1,
    'strokeColor': '#fff',
    'drawSequential': false,
    'ease': 'easeInOutQuad'
  });
  $gate1.lazylinepainter({
    'svgData': svgData,
    'strokeWidth': 1,
    'strokeColor': '#fff',
    'drawSequential': false,
    'ease': 'easeInOutQuad'
  });
  $service0.lazylinepainter({
    'svgData': svgData,
    'strokeWidth': 1,
    'strokeColor': '#fff',
    'drawSequential': false,
    'ease': 'easeInOutQuad'
  });
  $service1.lazylinepainter({
    'svgData': svgData,
    'strokeWidth': 1,
    'strokeColor': '#fff',
    'drawSequential': false,
    'ease': 'easeInOutQuad'
  });
  $service2.lazylinepainter({
    'svgData': svgData,
    'strokeWidth': 1,
    'strokeColor': '#fff',
    'drawSequential': false,
    'ease': 'easeInOutQuad'
  });

  $service3.lazylinepainter({
    'svgData': svgData,
    'strokeWidth': 1,
    'strokeColor': '#fff',
    'drawSequential': false,
    'ease': 'easeInOutQuad'
  });

  $service4.lazylinepainter({
    'svgData': svgData,
    'strokeWidth': 1,
    'strokeColor': '#fff',
    'drawSequential': false,
    'ease': 'easeInOutQuad'
  });

  // Scroll draw svg.
  var firstScroll = false;
  var firstScroll1 = false;

  $(window).on('scroll', function() {
    if (isScrolledIntoView('.box-location') && !firstScroll) {
        firstScroll = true;        
        // Your code here
        $gate0.lazylinepainter('paint');
        $gate1.lazylinepainter('paint');
    }
    if (isScrolledIntoView('.box-grid-service') && !firstScroll1) {
      firstScroll1 = true;   
      $service0.lazylinepainter('paint');
      $service1.lazylinepainter('paint');
      $service2.lazylinepainter('paint');
      $service3.lazylinepainter('paint');
      $service4.lazylinepainter('paint');
    }

    if ($(window).scrollTop() == 0) {
      firstScroll = false;
      firstScroll1 = false;
    }
  });

  // The function to check if div.animation_container is scrolled into view
  function isScrolledIntoView(elem)
  {
      var docViewTop = $(window).scrollTop();
      var docViewBottom = docViewTop + $(window).height();

      var elemTop = $(elem).offset().top;
      var elemBottom = elemTop + $(elem).height();

      return ((elemTop <= docViewBottom) && (elemTop >= docViewTop));
  }

  // Add Scroll Animate
  // $(".large-title").lettering();
  var scrollAppear = function () {
    $('.js-scroll-appear').each(function (i) {
      var $this = $(this),
        animatedClasses = $(this).data('scroll-appear');
      if ($this.is(':appeared')) {
        $this.addClass(animatedClasses);
      }
      else {
        $this.removeClass(animatedClasses);
      }
    })
  };
  $(window).scroll(function () {
    scrollAppear();
  });

  $(window).load(function() {
    setTimeout(function() {
      $('.box-hero-slide__small-title').addClass('fadeInDown');
      $('.box-hero-slide__title').addClass('bounceInDown');
      $('.box-hero-slide__body').addClass('fadeInUp');
      $('.box-hero__title').addClass('bounceInUp');
      $('.box-hero-slide__content .btn').addClass('fadeInUp');
    }, 250);

    if ($('.box-dragon-map').length) {
      $(window).scrollTop($('.box-dragon-map').offset().top - 30);
    }
  });

  // Equal Heigh
  var $jsHeightItem = $('.box-gallery--list .box-gallery-item');
  if($jsHeightItem.length) {
    $jsHeightItem.matchHeight();
  }

  // // Video auto play when scroll
  var videos = document.getElementsByClassName('introvideo'),
  fraction = 0.8;
  function checkScroll() {

    for(var i = 0; i < videos.length; i++) {

      var video = videos[i];

      var x = video.offsetLeft, y = video.offsetTop, w = video.offsetWidth, h = video.offsetHeight, r = x + w, //right
        b = y + h, //bottom
        visibleX, visibleY, visible;

        visibleX = Math.max(0, Math.min(w, window.pageXOffset + window.innerWidth - x, r - window.pageXOffset));
        visibleY = Math.max(0, Math.min(h, window.pageYOffset + window.innerHeight - y, b - window.pageYOffset));

        visible = visibleX * visibleY / (w * h);
        console.log(visibleY);

        if (visible > fraction) {
            video.play();
        } else {
            video.pause();
        }
    }
  }
  window.addEventListener('scroll', checkScroll, false);
  window.addEventListener('resize', checkScroll, false);

  // Circle string.
  $('.box-grid-service__icon .title').circleType({radius: 300});
  $('.box-hero-slide__small-title').circleType({radius: 300});

  if($('.language-switcher-locale-url .en').hasClass('active')) {
  	$('.language-icon').addClass('active');
  } else {
  	$('.language-icon').removeClass('active');
  }


}(this, this.document, this.jQuery, this.Drupal));