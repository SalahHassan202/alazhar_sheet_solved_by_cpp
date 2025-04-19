// S. Sum of Consecutive Odd Numbers
#include <iostream>
#include <string>
#include <iomanip>                               //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
 
    long long t ;          cin >> t ; 
    long long num1 , num2 , min = 0 , max = 0 , sum = 0 ;
    while(t--)
    {
        cin >> num1 >> num2 ;
        if(num1 >= num2)
        {
            max = num1 ;
            min = num2 ;
        }
        else     // (num1 < num2)
        {
            max = num2 ;
            min = num1 ;
        }

        for(int i = min+1 ; i < max ; i++)
        {
            if(i % 2 != 0)
            {
                sum+= i ;
            }
        }

        cout << sum << endl;
        sum = 0 ;
    }


    return 0 ;
}