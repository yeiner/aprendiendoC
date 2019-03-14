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
int n;

int fibonacci(int n ){
    
    int result = 0;
    if ( n < 2 ) {
       result = n;
    } else {
       result = fibonacci(n-1) + fibonacci(n-2);
    }
    
    return result;
}

int main(){
   
    cout << "Digita tamaño serie" << endl ;
    cin >> n ;

    for(int i = 0; i <= n; i++){
        cout <<  fibonacci( i ) << ' ';
    }
    
    cout << endl;
    return 0;
}


