/*
 * =====================================================================================
 *
 *       Filename:  distanciaEntreDosPuntos.cpp
 *
 *    Description: Curso c++ udemy.
 *    Calcular la distancia entre dos puntos (P1 y P2)
 *    localizados en un plano XY.  raiz((x1 -x2)^2 + (y2-y1)^2))
 *
 *        Version:  1.0
 *        Created:  21/02/18 19:26:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales (@yeiner_morales), 
 *   Organization:  @yeiner 
 *
 * =====================================================================================
 */
#include <iostream>
#include <cmath>


using namespace std;

int main(){
    
    int x1,x2,y1,y2;
    double distancia;

    cout<< "Punto 1"<<endl;
    cout<< "X :";
    cin>>x1;
    cout<< "Y :";
    cin>>y1;
    
    cout<< "Punto 2"<<endl;
    cout<< "X :";
    cin>>x2;
    cout<< "Y :";
    cin>>y2;

    distancia = sqrt(pow(x2-x1, 2)+ pow(y2-y1, 2));

    cout << "La distancia es : " << distancia << endl;

    return 0;
}

