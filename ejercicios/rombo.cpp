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

    cout << "   * " << endl;
    cout << "  *** " << endl;
    cout << " ***** " << endl;
    cout << "  *** " << endl;
    cout << "   * " << endl;
    
    for(int i = 0; i <= 13 ; i++){
       
        if (i == 0) {
            cout << "   *"   << endl;
        }

        if (i > 0) {
            cout << "  *"; 

            if(i >1 && i <= 5){
                cout << "*";
            }
        }

    }
    
    return 0;
}
