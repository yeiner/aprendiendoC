/*
 * =====================================================================================
 *
 *       Filename:  primos.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/07/17 11:32:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std ;

void ordenar(int& menor, int& mayor){
    if (mayor < menor ){
        int aux = menor;
        menor = mayor;
        mayor = aux;
    }
}

bool es_primo(int x){
    unsigned i = 2;

    while(( i <= x/2 ) && ( x% i != 0 )){
        i++;
    }

    return (i == x/2+1);
}

void primos(int min, int max){
    cout << "Números primos entre " << min << " y " << max;

    for(int i = min ; i <= max; i++) {
        if(es_primo(i)){
            cout << i << " ";
        }
    }

    cout << "\n" ;
}

int main() {

    int min, max;
    cout << "Introduzca el Rango de Valores \n";
    cin >> min >> max;
    ordenar(min, max);
    primos(min, max);

}
