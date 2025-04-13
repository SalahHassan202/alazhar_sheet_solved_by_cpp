// L. GCD
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long num1 , num2 ;            cin >> num1 >> num2 ;
    int min= 0 , max = 0 ;
    int GCD = 0 ;           //  the greatest common divisor

    if(num2 > num1)
    {
        max = num2;
        min = num1 ;
    }
    else
    {
        max = num1;
        min = num2 ;
    }

    for (int i = 1 ; i<= max ;i++)
    {
        if (num1 % i ==0  && num2 % i ==0)
        {
             GCD = i ;
        }
        
    }

    cout<< GCD <<endl;
    
  
    return 0 ;
}