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
#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <math.h>

using namespace emscripten;

float valor_cuota(float capital, float tasa, float plazo){
    return capital * tasa / (100 * (1 - pow((1 + tasa / 100), - plazo)));
}

float valor_interes(float saldo, float tasa, float plazo){
    return saldo * tasa / 100;
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("valor_cuota", &valor_cuota);
    function("valor_interes", &valor_interes);
}
