/*
 * =====================================================================================
 *
 *       Filename:  struct.c
 *
 *    Description:  Escribir un programa para aceptar e imprimir los detalles de un empleado.
 *
 *        Version:  1.0
 *        Created:  27/06/17 19:59:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales (yeiner.morales@gmail.com), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

struct emp{
    int eno;
    char name[20];
    float sal;
};

int main(){

    struct emp e;

    printf("Introducir el número de empleado   :"); scanf("%d", &e.eno);
    printf("Introducir el nombre de empleado   :"); scanf("%s", e.name);
    printf("Introducir el salario del empleado   :"); scanf("%d", &e.sal);
    printf("\n\nLos detalles del empleado son los siguientes.:\n");
    printf("%d      %s      %d\n",e.eno ,e.name, e.sal);
    
    return 0;
}

