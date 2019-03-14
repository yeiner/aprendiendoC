/*
 * =====================================================================================
 *
 *       Filename:  rombo.cpp
 *
 *    Description:  Rombo en c++
 *
 *        Version:  1.0
 *        Created:  19/07/17 14:56:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales (@yeiner_morales),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "   * " << endl;
    cout << "  *** " << endl;
    cout << " ***** " << endl;
    cout << "  *** " << endl;
    cout << "   * " << endl;

    cout << "Ingrese longitud del rombo 'Numero entre 7 y 100 Mas de 100 si tiene una pantalla grande :D'" << endl;
    cin >> n ;

    for(int i = 0; i <= n ; i++){

        for(int j = 1; j < n-i; j++ )
            cout << " ";

        for(int j = 1; j <= 2 * i; j++)
            cout << "*";
        

        cout << endl;

    }

    for (int i = n; i > 0 ; i-- ) {

        for(int k = 1; k < n - i; k++ )
            cout << " ";

        for (int k = 1; k <= 2 * i; k++)
            cout << "*";

        cout << endl;

    }

    return 0;
}
