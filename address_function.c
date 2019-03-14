/*Programa que busca dirección en memoria de la funcion 'disp()'*/
#include <stdio.h>

void disp(){
	printf("\nHola");
	printf("\nCómo");
	printf("\nestas?");
}

int main(){

	disp();
	printf("\nLa dirección de disp() : 0x%x", &disp);

	return 0;
}	
