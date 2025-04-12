// F. Multiplication table
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
    2 
    ==========
    output
    2 * 1 = 2
    2 * 2 = 4
    2 * 3 = 6
    2 * 4 = 8
    2 * 5 = 10
    2 * 6 = 12
    2 * 7 = 14
    2 * 8 = 16
    2 * 9 = 18
    2 * 10 = 20
    2 * 11 = 22
    2 * 12 = 24

   */


  long long num ;            cin >> num ;
  for(int i = 1 ; i <= 12 ; i++)
  {
    cout << num << " * " << i << " = " << num * i << endl;
  }

    return 0 ;
}