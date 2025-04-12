// C. Even, Odd, Positive and Negative
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long size;           cin >> size ;
    long long even = 0 , odd = 0 , negative = 0 , positive = 0 ;
    for(int i = 0 ; i < size; i++)
    {
       long long num ;      cin >> num ;
       if( num %2 == 0)
       {
            even++;
       }
       else
       {
            odd++;
       }

       if(num < 0)
       {
            negative++;
       }
       else if(num > 0)
       {
            positive++;
       }
    }

   cout<< "Even: " << even << endl;
   cout<< "Odd: " << odd << endl;
   cout<< "Positive: " << positive << endl;
   cout<< "Negative: " << negative << endl;;
     

    return 0 ;
}