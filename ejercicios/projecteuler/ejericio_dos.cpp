/*
 * =====================================================================================
 *
 *       Filename:  ejericio_dos.cpp
 *
 *    Description:  Each new term in the Fibonacci sequence is generated 
 *by adding the previous two terms. By starting with 1 and 2, 
 * the first 10 terms will be:
 *
 *    1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *
 * By considering the terms in the Fibonacci sequence whose values 
 * do not exceed four million, find the sum of the even-valued terms.
 *
 *
 *        Version:  1.0
 *        Created:  14/08/17 20:05:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales By projecteuler exercise (@yeiner), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <stdio.h>

using namespace std;

int n; 

int fibonacci(int n ){
    int result = 0;

    if( n < 2 ){
        result =  n;
    } else {
        result = fibonacci( n-1 ) + fibonacci( n-2 );      
    }

    return result;

}

int main(){
    int sumfibo = 0;
    int aux = 0;
    int limit = 4000000;
    cout << "Digite el tamaño de la serie de fibonacci" << endl;
    cin >> n;

    for(int i =0; i <= n; i++){
       aux =  fibonacci(i);

       if( aux < limit && aux % 2 == 0 ) {
         sumfibo = aux + sumfibo; 
       }
    }
   
    cout << "La suma de los pares de fibonacci es " << sumfibo <<  endl;

    return 0;
}


