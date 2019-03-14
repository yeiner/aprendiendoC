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
#include <sstream>

HolaMundo::HolaMundo(){
    
    this->set_title("Hola Mundo!");
    this->set_border_width(5);
    this->set_default_size(400, 200);

    etiqueta.set_text("Hola Mundo!!");

    /*  Configuración botonera */
    botonSalir = new Button(Stock::QUIT);
    botonMensaje = new Button("Mensaje");
    
    botonSalir->signal_clicked().connect(sigc::mem_fun(*this, &HolaMundo::click_salir));
    botonMensaje->signal_clicked().connect(sigc::mem_fun(*this, &HolaMundo::click_mensaje));

    botonera.pack_start(*botonSalir, PACK_SHRINK);
    botonera.pack_start(*botonMensaje, PACK_SHRINK);

    /*  Configuro la división */
    add(cajaV);
    cajaV.pack_start(etiqueta, PACK_EXPAND_WIDGET);//Esto ocupara el maximo tamaño.
    cajaV.pack_start(botonera, PACK_SHRINK);
    

    this->show_all_children();
}

HolaMundo::~HolaMundo(){
    delete botonSalir;
    delete botonMensaje;
}

void HolaMundo::click_mensaje(){

    int res;
    std::stringstream ss;
    MessageDialog dialog("Esto es un mensaje emergente");
    res = dialog.run();

    if ( res == RESPONSE_OK )
        etiqueta.set_text("Has dicho OK");
    else if ( res == RESPONSE_DELETE_EVENT )
        etiqueta.set_text("Has cancelado el diálogo");
    else {
        ss<<"Has respondido otra cosa: "<<res;
        etiqueta.set_text(ss.str().data());
    }
}

void HolaMundo::click_salir(){

    hide();
}
