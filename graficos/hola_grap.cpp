/*
 * =====================================================================================
 *
 *       Filename:  hola_grap.cpp
 *
 *    Description:  Aprendiendo Graficos en c++ linux con gtk
 *
 *        Version:  1.0
 *        Created:  10/07/17 10:53:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <gtkmm.h>

using namespace Gtk;

int main(int argc, char *argv[]){
    
    /* Inicialización GTK */
    Main entorno(argc, argv);

    /*Declaración de objetos */
    Window ventana;
    Label etiqueta;

    /* Características de la ventana */

    ventana.set_title("Hola mundo!");
    ventana.set_border_width(5);
    ventana.set_default_size(400, 200);

    /* Etiqueta */

    etiqueta.set_text("Hola mundo!!");
    ventana.add(etiqueta);

    /* Mostrar todo */

    ventana.show_all_children();

    /* Ejecutar GUI */
    entorno.run(ventana);

    return 0;

        
    return 0;
}

