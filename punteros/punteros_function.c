/*
 * =====================================================================================
 *
 *       Filename:  punteros_function.c
 *
 *    Description:  Cadenas con argumentos de función. Este programa muestra una cadena con notación de punteros.  by linux-party. Referer : https://www.linux-party.com/index.php/6538-tutorial-de-c-entrega-n-9
 *
 *        Version:  1.0
 *        Created:  27/06/17 13:44:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales (yeiner.morales@gmail.com), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

void disp(char *p);

int main(){
    
    char str[ ] = "Hello!!..Hello!!.. Pointers can handle it?";
    disp(str);

    return 0;
}

void disp(char *p){
    while(*p)
        printf("%c", *p++);
}

