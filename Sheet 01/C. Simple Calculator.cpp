// C. Simple Calculator
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>         //  setprecision()
using namespace std;
int main()
{
    long long x , y ; 
    cin >> x >> y ;
    cout<< x <<" + " << y <<" = "<< x+y << endl;
    cout<< x <<" * " << y <<" = "<< x*y << endl;
    cout<< x <<" - " << y <<" = "<< x-y << endl;


    return 0 ;
}


