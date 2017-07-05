/*
 * =====================================================================================
 *
 *       Filename:  read.c
 *
 *    Description:  Programa que recupera los datos desde un fichero.
 *
 *        Version:  1.0
 *        Created:  05/07/17 13:12:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner By tuto linux-party (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(){

    int sno, sub1, sub2, sub3;
    char name[10];

    FILE *fp = fopen("stud.dat", "a+");

    printf("Los registros de los estudiantes son los siguientes...\n");

    do{
        fscanf(fp, "%d%s%d%d%d\n", &sno, name, &sub1, &sub2, &sub3);
        printf("%5d%15s%3d%3d%3d\n", sno, name, sub1, sub2, sub3);
    }while(!foef(fp));
    fclose(fp);
    
    return 0;
}

