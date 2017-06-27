/*Mostrar contenido de la direccion que almacena la dirección p*/

#include<stdio.h>

int main(){
 	int	a = 10, *p;
 	p = &a;
 	printf("\nEl valor de A : %d", a);
 	printf("\nLa dirección de A : 0x%x", &a);
 	printf("\nEl valor de P : 0x%x", p);
 	printf("\nLa dirección de P : 0x%x", &p);
 	printf("\nEl contenido de P es : %d", *p);

 	return 0;
}



