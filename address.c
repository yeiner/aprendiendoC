#include <stdio.h>

int main() {

	int a = 10;

	printf("\n El varlo de A es : %d", a);
	printf("\n La dirección de A es : %d", &a);
	printf("\n La dirección absoluta en hexadecimal  es : 0x%x", &a); /*Obtener direccion absoluta hexadecimal*/
	return 0;
}	
