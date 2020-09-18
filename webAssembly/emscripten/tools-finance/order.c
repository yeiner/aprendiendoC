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
#include <stdio.h>

EMSCRIPTEN_KEEPALIVE
float valor_cuota(float capital, float tasa, float plazo){
    return capital * tasa / (100 * (1 - pow((1 + tasa / 100), - plazo)));
}

EMSCRIPTEN_KEEPALIVE
float valor_interes(float saldo, float tasa, float plazo){
    return saldo * tasa / 100;
}



EM_JS(void, call_alert, (), {
	alert('hello world!');
	throw 'all done';
});

int main(){
	call_alert();
	return 0;
}
/*   EMSCRIPTEN_BINDINGS(my_module) {
    function("valor_cuota", &valor_cuota);
    function("valor_interes", &valor_interes);
}*/
