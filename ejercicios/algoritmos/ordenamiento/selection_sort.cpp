/*
 * =====================================================================================
 *
 *       Filename:  selection_sort.cpp
 *
 *    Description:  Ordenamiento por selección.
 *
 *        Version:  1.0
 *        Created:  14/09/17 14:47:37
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

vector<int> selectionSort( vector<int> v ){
    int aux; 
    for(int i = 0; i < (v.size() - 1 ); i++ ){
        
        for(int j = i + 1; j < v.size(); j++){
            
            if( v[i] > v[j] ) {
                
                aux  = v[i];
                v[i] = v[j];
                v[j] = aux;
                
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

    vector_ordenado = selectionSort( vector_inicial );

    cout << "Ordenado " << endl;
        
    for(int k = 0; k < vector_ordenado.size(); k++){
        
        cout << " " << vector_ordenado[k];
    }

    cout << endl;
    return 0;
}

