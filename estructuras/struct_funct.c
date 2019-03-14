/*
 * =====================================================================================
 *
 *       Filename:  struct_funct.c
 *
 *    Description:  Returning structure object from a function
 *    by linux-party https://www.linux-party.com/index.php/6569-tutorial-de-c-entrega-n-10
 *
 *        Version:  1.0
 *        Created:  27/06/17 20:56:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales (yeiner.morales@gmail.com), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

struct emprec {

    int eno;
    char name[10];
};

struct emprec read();
void write(struct emprec t);

int main(){
    struct emprec e;
    e = read();
    write(e);

    return 0;
}

void write(struct emprec t){
    printf("\n\n%d%s", t.eno, t.name);
}

struct emprec read(){

    struct emprec t;
    printf("Insertar número de empleado :"); scanf("%d", &t.eno);
    printf("Insertar nombre empleado :"); scanf("%s", t.name);

    return t;
}
