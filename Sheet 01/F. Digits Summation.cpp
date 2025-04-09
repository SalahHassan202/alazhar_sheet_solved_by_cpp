// F. Digits Summation
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    /*
    13 12  ===> input 
    5      ===> output
    =================
    First Example :

    last digit in the first number is 3 and last digit in the second number is 2.

    So the answer is: (3 + 2 = 5)
        

    */

   long long n , m ;            // n , m are two numbers 
   cin >> n >> m ;
   cout << (n%10 + m%10) << endl;

    return 0 ;
}


