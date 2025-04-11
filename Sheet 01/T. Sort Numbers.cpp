// T. Sort Numbers
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    long long a , b , c ;                 // a , b , c are 3 numbers 
    cin >> a >> b >> c ;

    long long arr[3] = {a , b , c } ;            // array to make sorting 
    
   sort(arr , arr + 3 ) ;

   cout << arr[0] << endl;
   cout << arr[1] << endl;
   cout << arr[2] << endl;

   cout << endl;

   cout << a << endl;
   cout << b << endl;
   cout << c << endl;



    return 0 ;
}