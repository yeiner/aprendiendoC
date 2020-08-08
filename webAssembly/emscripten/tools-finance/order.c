/*
 * =====================================================================================
 *
 *       Filename:  order.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/07/20 20:36:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <emscripten.h>
#include <math.h>

EMSCRIPTEN_KEEPALIVE 
float valor_cuota(float interest, float capital, float term){
    return capital * interest / (100 * (1 - pow((1 + interest / 100), - term)));
}

EMSCRIPTEN_KEEPALIVE
float valor_interes(float saldo, float tasa, float plazo){
    return saldo * tasa / 100;
}
