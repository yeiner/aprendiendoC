/*
 * =====================================================================================
 *
 *       Filename:  serie_fibonacci.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  14/08/17 16:48:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales(@yeiner_morales), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;
int n, N = 0;

int fibonacci(int n ){
    
    int result = 0;
    int ultimn = n;
    if (n < 2 ) {
      return  result = n;
    } else {
        return result = (ultimn-1) + (n-2);
    }
    
}

int main(){
    
    cout << "Digita tamaño serie" << endl ;
    cin >> n ;;

    for(int i = 0; i <= n; i++){
        cout << fibonacci(i) << ' ';

    }


    return 0;
}


