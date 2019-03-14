/*
 * =====================================================================================
 *
 *       Filename:  mutli_tres_cinco.cpp
 *
 *    Description:If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
 *    The sum of these multiples is 23.
 *
 *    Find the sum of all the multiples of 3 or 5 below 1000.
 *
 *
 *        Version:  1.0
 *        Created:  13/07/17 20:48:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales By https://projecteuler.net , 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int numero;
    int total = 0;
    cout << "Digite un numero :" << endl;
    cin >>numero;
    vector<int> arr;
    for(int i = 1; i < numero; i++){
        if( (i%3) == 0 || ( i%5) ==0 ){
             arr.push_back(i);
             total += i;
        }
    }
    
    for(int j =0; j < arr.size(); j++ ){
        cout << "Los numeros son  : " << arr[j] << ' ' << endl;
    }

    cout << "La suma es : " << total << endl;

    return 0;
}
