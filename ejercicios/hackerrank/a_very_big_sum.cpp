/*
 * =====================================================================================
 *
 *       Filename:  a_very_big_sum.cpp
 *
 *    Description: A Very Big Sum  :  
 *    Sample Input
 *    5 
 *    1000000001 1000000002 1000000003 1000000004 1000000005
 *    Output
 *    5000000015 
 *
 *        Version:  1.0
 *        Created:  25/07/17 21:46:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner Morales By hackerrank  (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>

using namespace std;

long aVeryBigSum(int n, vector <long> ar) {
    // Complete this function
    long int result = 0;
    for(int i=0 ; i < n ; i++){
        result += ar[i];
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<long> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}
