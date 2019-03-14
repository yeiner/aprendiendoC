/*
 * =====================================================================================
 *
 *       Filename:  write.c
 *
 *    Description:  Programa que lee datos de un estudinate y los almacena en un fichero de datos.
 *
 *        Version:  1.0
 *        Created:  05/07/17 12:45:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:   By linux-party , 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> 
#include <ncurses.h>
int main() {
    
    int sno, sub1, sub2, sub3;

    char name[10],ch;

    FILE *fp = fopen("stud.dat", "w");
    do{
        printf("Escriba el número del estudiante: "); scanf("%d", &sno);
        printf("Escriba el nombre del estudiante: "); scanf("%s", name);
        printf("Escriba 3 marcas subjetivas  "); 
        scanf("%d%d%d", &sub1, &sub2, &sub3);
        fprintf(fp, "%d %s %d %d %d\n", sno, name, sub1, sub2, sub3);
        printf("\n\nDeseas continuar? ... (y/n)"); 
        ch = getchar();
        printf("char : %c", ch);
    }while(toupper(ch) != 'N');
    fclose(fp);

    return 0;

}

