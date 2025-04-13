// J. Primes from 1 to n
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    /*
    
    A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

    In other words : prime number divisible only by 1 and itself.

    Be careful that 1 is not prime .
    
    */
    long long num ;           cin >> num ; 

    for ( int i = 2 ; i <= num ; i++)
    {
        int prime = 0 ; 
       for(int j = 2 ; j < i ; j++)
       {
            if(i % j == 0 )
            {
                prime = 1 ; 
                break ; 
            }

       }
            if (prime == 0 )
            {
                cout << i << " " ;
            }
    }
  
    return 0 ;
}