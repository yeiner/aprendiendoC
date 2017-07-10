/*
 * =====================================================================================
 *
 *       Filename:  hworld.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/07/17 11:19:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  by https://totaki.com/poesiabinaria/2010/10/interfaces-graficos-en-linux-con-gtkmm-1-hola-mundo/ (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _HWORLD_H
#define _HWORLD_H

#include <gtkmm.h>

using namespace Gtk;

class HolaMundo : public Window {
    public:
        HolaMundo();
        ~HolaMundo();

        void click_salir();
        void click_mensaje();
        
        VBox cajaV;
        HButtonBox botonera;
        Label etiqueta;
        Button *botonSalir, *botonMensaje;
};
#endif
