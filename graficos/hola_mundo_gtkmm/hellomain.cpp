/*
 * =====================================================================================
 *
 *       Filename:  hellomain.cpp
 *
 *    Description:  Main hola mundo utilizando gtkmm 3.0
 *
 *        Version:  1.0
 *        Created:  10/07/17 11:25:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales by https://totaki.com/poesiabinaria/2010/10/interfaces-graficos-en-linux-con-gtkmm-1-hola-mundo/, 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <gtkmm.h>
#include "hworld.h"

int main(int argc, char *argv[]){

    Main entorno(argc, argv);

    /*Creamos la ventana */
    HolaMundo hmundo;

    /* Ejecutamos */
    
    entorno.run(hmundo);


    return 0;
}

