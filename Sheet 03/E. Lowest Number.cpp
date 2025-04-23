// E. Lowest Number
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

    long long value = arr[0] ;
    long long position = 1 ;

   for(int i = 0 ; i < size ; i++)
   {
        if(arr[i] < value)
        {
            value = arr[i] ;
            position = i + 1 ;
        }
   }

    cout << value  << " " << position << endl;

    return 0 ;
}