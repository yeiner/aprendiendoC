/*imprimir los elementos de una matriz utlizando la notación de punteros*/

#include <stdio.h>

int main(){
    int i, a[] = { 56, 43, 78, 98, 12 }, *p;
    
    p = a; 
    while (*p)
        printf("\n%d", *p++);
    return 0;
}
