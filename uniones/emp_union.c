/*
 * =====================================================================================
 *
 *       Filename:  emp_union.c
 *
 *    Description:  Esta es la mejor forma de aceptar y mostrar registros de un empleado
 *
 *        Version:  1.0
 *        Created:  27/06/17 21:11:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales (yeiner.morales@gmail.com), 
 *   Organization:  by linux-party tutorial
 *
 * =====================================================================================
 */
#include <stdio.h>

union u_emp{
    int eno;
    char name[20];
    float sal;
};

int main(){
    union u_emp ue;
    printf("\nNúmero del empleado :"); scanf("%d", &ue.eno);
    printf("\n%d", ue.eno);
    printf("\nNombre del empleado :"); scanf("%s", ue.name);
    printf("\n%s", ue.name);
    printf("\nSueldo del empleado :"); scanf("%f", &ue.sal);
    printf("%f", ue.sal);

    return 0;
}
