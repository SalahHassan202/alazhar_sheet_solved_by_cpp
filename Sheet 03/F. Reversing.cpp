// F. Reversing
#include <iostream>
#include <string>
#include <iomanip>                               //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long size ;                 cin >> size  ;
    long long arr[size] ;

    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i] ;
    }

    
        // reverse the array 
    for(int i = size- 1 ; i >= 0 ; i--)
    {
        cout << arr[i] <<" " ;
    }


    return 0 ;
}