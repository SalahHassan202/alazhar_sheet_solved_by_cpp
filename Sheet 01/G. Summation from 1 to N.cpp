// G. Summation from 1 to N
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

   /*
   
   input
    3
    output
    6
    input
    10
    output
    55

    Note
    First Example :

    the numbers between 1 and 3 are 1,2,3 .

    So the answer is: (1 + 2 + 3 = 6)

    Second Example :

    the numbers between 1 and 10 are 1,2,3,4,5,6,7,8,9,10.

    So the answer is: (1 + 2 + 3 + 4 + 5 + 6 +7 +8 + 9 + 10 = 55)
   
   */

  long long num ;                cin >> num ;
  cout<< (num * ( num + 1) / 2 ) << endl;

    return 0 ;
}


