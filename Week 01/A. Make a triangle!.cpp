// A. Make a triangle!
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
int main()
{
    // ===> the sum of two side lengths of a triangle is always greater than the third side. 
   
    int a , b , c  ;                    cin >> a >> b >> c ;      // are 3 length of triangle
    int result = 0 ;
 
    if(a + b <= c)
    {
        result = c - (a + b ) + 1 ;
    }
    else if (a +c <= b)
    {
        result = b - (a + c) + 1 ;
    }
    else if (b + c <= a )
    {
        result = a - (b + c ) + 1 ; 
    }
    else
    {
        cout << 0 << endl; 
        return 0 ;                // end of the program 
    }

    cout << result << endl;
    
	

    return 0 ;
}