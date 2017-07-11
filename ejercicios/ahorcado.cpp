/*
 * =====================================================================================
 *
 *       Filename:  ahorcado.cpp
 *
 *    Description:  Ahorcado 
 *
 *        Version:  1.0
 *        Created:  11/07/17 14:54:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string> /*Cadena de caracteres */
#include <vector>
#include <ifstream>

using namespace std;

string palabra_original;
string palabra_mostrar;
int vidas;

void mostrar();
void ingresar(char x);
void inicializar();

string obtener_palabra_aleatoria();

int main(){
    inicializar();
    mostrar();

    while( vidas>0 && plabra_mostrar != palabra_original ){
        char x;
        cin>>x;
        System("clear");
        ingresar(x);
        mostrar();
    }

    if( vidas>0 ) cout<<"Ganaste!"<<endl;
    else cout<<"Perdiste, la palabra era: "<<palabra_original<<endl;

}

void mostrar(){

    cout<<"Vidas: "<< vidas << endl;
    cout<<palabra_mostrar<<endl;

}

void inicializar(){
    vidas = 5;
    palabra_original = obtener_palabra_aleatoria();

    for(int i=0; i<palabra_original.length(); i++){
        if(palabra_original[i] >='A' && palabra_original[i]<='Z'){
            palabra_original[i]+=32;
        }
    }

    for(int i=0; i<palabra_original.length(); i++){
        if(palabra_original[i] >= 'a' && palabra_original[i]<= 'z'){
            palabra_mostrar += '-';
        }else{
            palabra_mostrar+=palabra_original[i];
        }
    }
}

void ingresar(char x){
    bool perdiVidas = true;

    for(int =0; i<palabra_original.length(); i++){
        if(x==palabra_original[i]){
            perdiVidas = false;
            palabra_mostrar[i]=x;
        }
    }

    if(perdiVidas) vidas--;
}

vector<string> obtener_coleccion_de_palabras(){
    vector<string> palabras:

    return palabras;
}
