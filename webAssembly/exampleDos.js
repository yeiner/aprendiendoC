"use strict";/*Compiled using Cheerp (R) by Leaning Technologies Ltd*/var u=Math.imul;var v=Math.fround;var aSlot=null;var oSlot=0;var nullArray=[null];var nullObj={d:nullArray,o:0};function asmJS(stdlib, ffi, heap){"use asm";var __stackPtr=ffi.heapSize|0;var HEAP8=new stdlib.Uint8Array(heap);var HEAP16=new stdlib.Uint16Array(heap);var HEAP32=new stdlib.Int32Array(heap);var HEAPF32=new stdlib.Float32Array(heap);var HEAPF64=new stdlib.Float64Array(heap);var Infinity=stdlib.Infinity;var NaN=stdlib.NaN;var abs=stdlib.Math.abs;var acos=stdlib.Math.acos;var asin=stdlib.Math.asin;var atan=stdlib.Math.atan;var atan2=stdlib.Math.atan2;var ceil=stdlib.Math.ceil;var cos=stdlib.Math.cos;var exp=stdlib.Math.exp;var floor=stdlib.Math.floor;var log=stdlib.Math.log;var pow=stdlib.Math.pow;var sin=stdlib.Math.sin;var sqrt=stdlib.Math.sqrt;var tan=stdlib.Math.tan;var u=stdlib.Math.imul;var v=stdlib.Math.fround;var __dummy=ffi.__dummy;function t(){var __savedStack=0;__savedStack=__stackPtr;__stackPtr=__stackPtr&0xfffffff8;__stackPtr=__savedStack;return;}function __asmjs_memmove(src,dst,size){src=src|0;dst=dst|0;size=size|0;var i=0;var end=0;var inc=1;if(src>>>0<dst>>>0){i=size-1|0;end=-1;inc=-1;}else end=size;while(1){if((i|0)==(end|0))break;HEAP8[dst+i|0]=HEAP8[src+i|0];i=i+inc|0;}return dst|0;}var __FUNCTION_TABLE_v=[t];return {};};var heap = new ArrayBuffer(1048576);var HEAP8= new Uint8Array(heap);var HEAP16= new Uint16Array(heap);var HEAP32= new Int32Array(heap);var HEAPF32= new Float32Array(heap);var HEAPF64= new Float64Array(heap);function __dummy() { throw new Error('this should be unreachable'); };var ffi = {heapSize:heap.byteLength,__dummy:__dummy,};var stdlib = {Math:Math,Infinity:Infinity,NaN:NaN,Uint8Array:Uint8Array,Uint16Array:Uint16Array,Int32Array:Int32Array,Float32Array:Float32Array,Float64Array:Float64Array,};function n(){var a=null;a="pagetitle";a=document.getElementById(a);a.textContent;a="Literal C++ string";changeTitle(a);return;}function i(q,r){var c=0,d=0,a=null,s=null;a=String();c=q[r]|0;if((c&255)===0){return a;}else{d=0;}while(1){s=String.fromCharCode(c<<24>>24);a=a.concat(s);d=d+1|0;c=q[r+d|0]|0;if((c&255)===0){break;}}return a;}function e(a,b){var c=null;c=i(a,b);return String(c);}var p=new Uint8Array([112,97,103,101,116,105,116,108,101,0]);var o=new Uint8Array([76,105,116,101,114,97,108,32,67,43,43,32,115,116,114,105,110,103,0]);var __asm=asmJS(stdlib, ffi, heap);n();