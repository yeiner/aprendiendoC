/*
 * =====================================================================================
 *
 *       Filename:  arithmetic.c
 *
 *      Description:  Tutorial emscripten by Code first tutorial youtube channel.
 *
 *        Version:  1.0
 *        Created:  24/06/20 21:19:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales (yeiner.morales@gmail.com), 
 *   Organization:  None
 *
 * =====================================================================================
 */
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
float add(float x, float y){
    return x + y;
}


EMSCRIPTEN_KEEPALIVE
float multiply(float x, float y){
    return x * y;
}


EMSCRIPTEN_KEEPALIVE
float substract(float x, float y) {
    return x - y;
}


EMSCRIPTEN_KEEPALIVE

float divide(float x, float y) {
    return x / y;
}
