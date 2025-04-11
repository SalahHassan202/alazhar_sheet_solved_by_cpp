// P. First digit !
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    long long num ;      // (999 < X  ≤  9999)   ,  any number = 4 digit ===>(????) 
    cin >> num ;

    long long result = (num / 1000) ;
   
    if(result % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else         // (result % 2 != 0)
    {
        cout << "ODD" << endl;
    }






    return 0 ;
}