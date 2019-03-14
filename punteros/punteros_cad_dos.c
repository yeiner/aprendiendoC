/*
 * =====================================================================================
 *
 *       Filename:  punteros_cad_dos.c
 *
 *    Description:  Array de punteros a cadenas 
 *       No es una desventaja almacenar una matriz de cadenas, en que los sub arrays que mantienen la cadena todos deben tener la misma longitud. Así que el espacio se pierde cuando las cadenas son más cortas que los sub arrays
 *
 *    Aquí está la solución. by linux-party https://www.linux-party.com/index.php/6538-tutorial-de-c-entrega-n-9 
 *
 *
 *        Version:  1.0
 *        Created:  27/06/17 13:52:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(){
    
    char *weeks[7 ] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Tuesday", "Friday", "Saturday" };

    int i;
    for ( i = 0; i<7; i++)
        puts(weeks[ i ]);

    return 0;
}

