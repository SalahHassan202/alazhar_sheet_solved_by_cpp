// A. Summation
#include <iostream>
#include <string>
#include <iomanip>                               //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long size , sum = 0  ;
    cin >> size ;
    long long arr[size] ;

    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i] ; 
    }

    for(int i = 0 ; i < size ; i++)
    {
        sum+= arr[i] ;       // sum = sum + i ; 
    }

    cout << abs(sum )<< endl;


    return 0 ;
}