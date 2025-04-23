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

   for(int i = 0 ; i < size ; i++)
   {
        if(arr[i] <= 10)
        {
            cout << "A[" << i << "]" << " = " << arr[i] << endl;
        }
   }


    return 0 ;
}