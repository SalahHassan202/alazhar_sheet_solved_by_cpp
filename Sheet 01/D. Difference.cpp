// D. Difference
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>         //  setprecision()
using namespace std;
int main()
{
    long long a , b , c , d ;              // a , b , c , d  ===> four numbers
    cin >> a >> b >> c >> d ;
    long long Difference = ( a * b ) - ( c * d );
    cout<< "Difference = " << Difference << endl;

    return 0 ;
}


