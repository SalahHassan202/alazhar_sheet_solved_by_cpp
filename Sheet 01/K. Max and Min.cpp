// K. Max and Min
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    long long a , b , c  ;                    // a , b , c are three numbers 
    cin >> a >> b >> c ;
    cout<< min({a , b , c }) << " " << max({a , b , c }) ;
  
    return 0 ;
}


