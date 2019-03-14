/*
 * =====================================================================================
 *
 *       Filename:  filename.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/08/17 17:07:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    int array[231];
    int nElementos;

    nElementos = sizeof(array)/sizeof(int);
    cout << "Elemtnos total " << nElementos << endl;
    nElementos = sizeof(array)/sizeof(array[0]); 
    cout << "Elemtnos total " << nElementos << endl;
}
