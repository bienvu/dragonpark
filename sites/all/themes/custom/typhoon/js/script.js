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


      // Slide attraction homepage.
      var slideattractionSlickOptions = {
        slidesToShow: 1,
        slidesToScroll: 1,
        arrows: false,
        fade: true,
        dots: false,
        autoplay: false,
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


  // Date number
  /*  var $dateFomat = $('.box-schedule__month'),
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
   });*/

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

  // language hover
  var $languageWrap = $('.language-switcher-locale-url'),
    touchtime = 0,
    heightWD = $(window).height(),
    widthWD = $(window).width();

  $languageWrap.hover(function(){
    $(this).addClass('is-hover');
  }, function(){
    $(this).removeClass('is-hover');
  });

  if (widthWD > 1024) {
    $('.pane-bean-hero-slide-home-page .js-hero-slide').css("height", heightWD);
  }

  if (widthWD <= 1024 ) {
    $languageWrap.on('click', function(e) {
      if(touchtime == 0) {
        //set first click
        touchtime = new Date().getTime();
        $(this).addClass('is-hover');
        e.preventDefault();
      } else {
        //compare first click to this click and see if they occurred within double click threshold
        if(((new Date().getTime())-touchtime) < 800) {
          //double click occurred
          touchtime = 0;
        } else {
          //not a double click so set as a new first click
          touchtime = new Date().getTime();
          $(this).addClass('is-hover');
          e.preventDefault();
        }
      }
    });
  }


  $('.weather-paralax').parallax("20%", 0.1);
  // function heightImghero() {
  //   var heightWd = $(window).height(),
  //       widthWD = $(window).width();

  //   if (widthWD > 1024) {
  //     $('.pane-bean-hero-slide-home-page .box-hero-slide').css('height', heightWd);
  //   } else {
  //     $('.pane-bean-hero-slide-home-page .box-hero-slide').css('height', 'calc(100vw/2.4)');
  //   }
  // }
  // heightImghero();

  // $(window).resize(function() {
  //   heightImghero();
  // });

  // Add Scroll Animate
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
    });
  };
  $(window).scroll(function () {
    scrollAppear();
  });


  $(window).load(function() {
    setTimeout(function() {
      $('.box-hero-slide__title').addClass('bounceInDown');
      $('.box-hero-slide__body').addClass('fadeInUp');
      $('.box-hero__title').addClass('bounceInUp');
    }, 250);

    if ($('.box-dragon-map').length) {
      $(window).scrollTop($('.box-dragon-map').offset().top - 30);
    }
  });

  // // text circle.
  // //var textCircle = function (options) {
  // var circleType = function(options) {
  //   alert("ok");
  //   var self = this,
  //     settings = {
  //       dir: 1,
  //       position: 'relative',
  //     };
  //   if (typeof($.fn.lettering) !== 'function') {
  //     console.log('Lettering.js is required');
  //     return;
  //   }
  //   return this.each(function () {
  //
  //     if (options) {
  //       $.extend(settings, options);
  //     }
  //     var elem = this,
  //       delta = (180 / Math.PI),
  //       fs = parseInt($(elem).css('font-size'), 10),
  //       ch = parseInt($(elem).css('line-height'), 10) || fs,
  //       txt = elem.innerHTML.replace(/^\s+|\s+$/g, '').replace(/\s/g, '&nbsp;'),
  //       letters,
  //       center;
  //
  //     elem.innerHTML = txt
  //     $(elem).lettering();
  //
  //     elem.style.position =  settings.position;
  //
  //     letters = elem.getElementsByTagName('span');
  //     center = Math.floor(letters.length / 2)
  //
  //     var layout = function () {
  //       var tw = 0,
  //         i,
  //         offset = 0,
  //         minRadius,
  //         origin,
  //         innerRadius,
  //         l, style, r, transform;
  //
  //       for (i = 0; i < letters.length; i++) {
  //         tw += letters[i].offsetWidth;
  //       }
  //       minRadius = (tw / Math.PI) / 2 + ch;
  //
  //       if (settings.fluid && !settings.fitText) {
  //         settings.radius = Math.max(elem.offsetWidth / 2, minRadius);
  //       }
  //       else if (!settings.radius) {
  //         settings.radius = minRadius;
  //       }
  //
  //       if (settings.dir === -1) {
  //         origin = 'center ' + (-settings.radius + ch) / fs + 'em';
  //       } else {
  //         origin = 'center ' + settings.radius / fs + 'em';
  //       }
  //
  //       innerRadius = settings.radius - ch;
  //
  //       for (i = 0; i < letters.length; i++) {
  //         l = letters[i];
  //         offset += l.offsetWidth / 2 / innerRadius * delta;
  //         l.rot = offset;
  //         offset += l.offsetWidth / 2 / innerRadius * delta;
  //       }
  //       for (i = 0; i < letters.length; i++) {
  //         l = letters[i]
  //         style = l.style
  //         r = (-offset * settings.dir / 2) + l.rot * settings.dir
  //         transform = 'rotate(' + r + 'deg)';
  //
  //         style.position = 'absolute';
  //         style.left = '50%';
  //         style.marginLeft = -(l.offsetWidth / 2) / fs + 'em';
  //
  //         style.webkitTransform = transform;
  //         style.MozTransform = transform;
  //         style.OTransform = transform;
  //         style.msTransform = transform;
  //         style.transform = transform;
  //
  //         style.webkitTransformOrigin = origin;
  //         style.MozTransformOrigin = origin;
  //         style.OTransformOrigin = origin;
  //         style.msTransformOrigin = origin;
  //         style.transformOrigin = origin;
  //         if(settings.dir === -1) {
  //           style.bottom = 0;
  //         }
  //       }
  //
  //       if (settings.fitText) {
  //         if (typeof($.fn.fitText) !== 'function') {
  //           console.log('FitText.js is required when using the fitText option');
  //         } else {
  //           $(elem).fitText();
  //           $(window).resize(function () {
  //             updateHeight();
  //           });
  //         }
  //       }
  //       updateHeight();
  //
  //       if (typeof settings.callback === 'function') {
  //         // Execute our callback with the element we transformed as `this`
  //         settings.callback.apply(elem);
  //       }
  //     };
  //
  //     var getBounds = function (elem) {
  //       var docElem = document.documentElement,
  //         box = elem.getBoundingClientRect();
  //       return {
  //         top: box.top + window.pageYOffset - docElem.clientTop,
  //         left: box.left + window.pageXOffset - docElem.clientLeft,
  //         height: box.height
  //       };
  //     };
  //
  //     var updateHeight = function () {
  //       var mid = getBounds(letters[center]),
  //         first = getBounds(letters[0]),
  //         h;
  //       if (mid.top < first.top) {
  //         h = first.top - mid.top + first.height;
  //       } else {
  //         h = mid.top - first.top + first.height;
  //       }
  //       elem.style.height = h + 'px';
  //     }
  //
  //     if (settings.fluid && !settings.fitText) {
  //       $(window).on('resize', function () {
  //         layout();
  //       });
  //     }
  //
  //     if (document.readyState !== "complete") {
  //       elem.style.visibility = 'hidden';
  //       $(window).on('load',function () {
  //         elem.style.visibility = 'visible';
  //         layout();
  //       });
  //     } else {
  //       layout();
  //     }
  //   });
  // };

  function circleInit() {
    $('.box-grid-service__icon .title').circleType({radius: 384});
  }

  $(function() {
    circleInit();
  });

  //$('.box-grid-service__icon .title').textCircle();

}(this, this.document, this.jQuery, this.Drupal));