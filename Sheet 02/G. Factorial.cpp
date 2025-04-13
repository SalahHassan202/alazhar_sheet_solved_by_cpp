// G. Factorial
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long t ;            cin >> t ;              // number of test cases ;
    long long fact = 1 ;
    while(t--)
    {
        long long num ;           cin >> num ; 
        for(int i = 2 ; i <= num ; i++)
        {
               fact *= i ;     //  fact = fact * i ; 
        }

        cout << fact << endl;

        fact = 1 ;            //   to make counter    {  t }    starrt again  
    }

    /*


    input 

    t =2     number of cases 

    5 
    3

    output 
    120 
    720      false        ===> so that we use this       =======>      fact =1; 

    right answer 
    120
    6         not 720          so that we make fact = 1 after print the fact in all cases ; 
    
    */

    return 0 ;
}