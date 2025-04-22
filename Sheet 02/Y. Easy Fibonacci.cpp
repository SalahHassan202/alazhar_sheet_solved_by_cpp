// Y. Easy Fibonacci
#include <iostream>
#include <string>
#include <iomanip>                               //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
   /*
   
   Note: 
   In order to create the Fibonacci sequence use the following function:

    fib(1) = 0.
    fib(2) = 1.
    fib(n) = fib(n - 1) + fib(n - 2).
   
   */

    int t ;       cin>>t ;        // t ===> size

    int first =0, second =1;
    if (t == 1)
    {
        cout<<first<<endl;
    }
    else if (t==2)
    {
        cout<<first<<" "<<second<<endl;
    }
    else
    {
        cout<<first<<" "<<second <<" ";

        for(int i=2 ; i<t ;i++)
        {
        int result =first + second ;
        cout<<result<<" ";

        first=second;
        second =result ;
        

        }
    }



    return 0 ;
}