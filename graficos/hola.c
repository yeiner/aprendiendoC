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

#include <gtk/gtk.h>

int main(int argc, char **argv){

    GtkWidget *w, *label;

    gtk_init(&argc, &argv);

    /* Creo la ventana */
    w = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    /* Le pongo un título */
    gtk_window_set_tittle(GTK_WINDOW(w), "Hola mundo");

    /*  Creamos un "label". */
    label = gtk_label_new("Hola, mundo!");

    /*  Y lo agregamos a la ventana */
    gtk_container_add(GTK_CONTAINER(w), label);

    gtk_widget_show_all(w);

    /* Finalemnte entramos en el bucle principal */

    gtk_main();

    return 0;
}

