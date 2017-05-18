/*
 * CircleType 0.37
 * Peter Hrynkow
 * Copyright 2014, Licensed GPL & MIT
 *
 */
$.fn.circleType=function(a){var c={dir:1,position:"relative"};return"function"!=typeof $.fn.lettering?void console.log("Lettering.js is required"):this.each(function(){a&&$.extend(c,a);var h,i,b=this,d=180/Math.PI,e=parseInt($(b).css("font-size"),10),f=parseInt($(b).css("line-height"),10)||e,g=b.innerHTML.replace(/^\s+|\s+$/g,"").replace(/\s/g,"&nbsp;");b.innerHTML=g,$(b).lettering(),b.style.position=c.position,h=b.getElementsByTagName("span"),i=Math.floor(h.length/2);var j=function(){var g,j,k,m,n,o,p,q,a=0,i=0;for(g=0;g<h.length;g++)a+=h[g].offsetWidth;for(j=a/Math.PI/2+f,c.fluid&&!c.fitText?c.radius=Math.max(b.offsetWidth/2,j):c.radius||(c.radius=j),k=c.dir===-1?"center "+(-c.radius+f)/e+"em":"center "+c.radius/e+"em",m=c.radius-f,g=0;g<h.length;g++)n=h[g],i+=n.offsetWidth/2/m*d,n.rot=i,i+=n.offsetWidth/2/m*d;for(g=0;g<h.length;g++)n=h[g],o=n.style,p=-i*c.dir/2+n.rot*c.dir,q="rotate("+p+"deg)",o.position="absolute",o.left="50%",o.marginLeft=-(n.offsetWidth/2)/e+"em",o.webkitTransform=q,o.MozTransform=q,o.OTransform=q,o.msTransform=q,o.transform=q,o.webkitTransformOrigin=k,o.MozTransformOrigin=k,o.OTransformOrigin=k,o.msTransformOrigin=k,o.transformOrigin=k,c.dir===-1&&(o.bottom=0);c.fitText&&("function"!=typeof $.fn.fitText?console.log("FitText.js is required when using the fitText option"):($(b).fitText(),$(window).resize(function(){l()}))),l(),"function"==typeof c.callback&&c.callback.apply(b)},k=function(a){var b=document.documentElement,c=a.getBoundingClientRect();return{top:c.top+window.pageYOffset-b.clientTop,left:c.left+window.pageXOffset-b.clientLeft,height:c.height}},l=function(){var d,a=k(h[i]),c=k(h[0]);d=a.top<c.top?c.top-a.top+c.height:a.top-c.top+c.height,b.style.height=d+"px"};c.fluid&&!c.fitText&&$(window).on("resize",function(){j()}),"complete"!==document.readyState?(b.style.visibility="hidden",$(window).on("load",function(){b.style.visibility="visible",j()})):j()})};
