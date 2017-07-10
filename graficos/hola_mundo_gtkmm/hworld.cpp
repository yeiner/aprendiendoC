/*
 * =====================================================================================
 *
 *       Filename:  hworld.cpp
 *
 *    Description:  Hola mundo utilizando gtkmm Version 3.0
 *
 *        Version:  1.0
 *        Created:  10/07/17 11:22:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales by https://totaki.com/poesiabinaria/2010/10/interfaces-graficos-en-linux-con-gtkmm-1-hola-mundo/ (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "hworld.h"

HolaMundo::HolaMundo(){
    
    this->set_title("Hola Mundo!");
    this->set_border_width(5);
    this->set_default_size(400, 200);

    etiqueta.set_text("Hola Mundo!!");
    this->add(etiqueta);

    this->show_all_children();
}

HolaMundo::~HolaMundo(){

}
