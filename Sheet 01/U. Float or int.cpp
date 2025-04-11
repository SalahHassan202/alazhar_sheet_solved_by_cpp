// U. Float or int
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    /*
    x = 232.342     ===> float or double
    put y = x ===> long long or int  ===. take the integer part ;
    result = x - y ===> double - int     ===> the double part
    

    */
 
    double x ;                      cin >> x ;     
    long long y = x ;               // the  integer part of number 
    double result = x - y ;         // the float part of number 

    if(result != 0 )  // 0.214521
    {
        cout<< "float" << " " << y << " " << result << endl;
    }
    else     // 0.000000
    {
        cout<< "int" << " " << y << endl;
    }




    return 0 ;
}