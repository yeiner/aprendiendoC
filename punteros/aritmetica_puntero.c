/*
 * =====================================================================================
 *
 *       Filename:  aritmetica_puntero.c
 *
 *    Description:  Demostración de la aritmética de puntero, incrementando el valor de la dirección
 *
 *        Version:  1.0
 *        Created:  26/06/17 21:48:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales by linux-party tutorial (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(){
	int a, *p;
	a = 100;
	p = &a;
	(*p)++; /* Increment pointer to (content at address) by 1 */
	printf("%d", *p);

	return 0;
}

