/*
 * =====================================================================================
 *
 *       Filename:  bubble_sort.cpp
 *
 *    Description: Ordenamiento Burbuja 
 *
 *        Version:  1.0
 *        Created:  14/09/17 10:18:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales (@yeiner_morales), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> v ){
    
    int aux; 

    for (int z = 1; z < v.size(); z++ ){

        for( int i=0; i < (v.size() -z); i++ ){

            if( v[i] > v[i+1] ){

                aux    = v[i];
                v[i]   = v[i+1];
                v[i+1] = aux;
            }
        
        }
    }

    return v;
}

int main(){

    vector<int> vector_inicial;
    vector<int> vector_ordenado;
    
    int cantidad,posicion;

    cout << "Ingrese cantidad de números a comparar " << endl;
    cin >> cantidad;
    
    for (int i = 0; i < cantidad; i++ ) {
        

        cout << "Ingrese numero posición " << i << endl; 
        cin >> posicion; 
        vector_inicial.push_back(posicion); 

        cout << endl;
    }
    
    cout << "Sin ordenar " << endl; 
    
    for(int k = 0 ; k < vector_inicial.size(); k++ ){
        cout << " " << vector_inicial[k];
    }
    
    cout << endl;

    vector_ordenado = bubbleSort( vector_inicial );
    
    cout << "Ordenado" << endl; 

    for( int j = 0; j < vector_ordenado.size(); j++ ){
        cout << " " << vector_ordenado[j];
    }
    
    cout << endl;
   
    return 0;

}
