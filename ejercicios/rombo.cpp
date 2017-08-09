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
    
    for(int i = 20; i > 0 ; i--){
        
        cout << "*";
    }
    
    return 0;
}

