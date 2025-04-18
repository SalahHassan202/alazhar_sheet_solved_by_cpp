// P. Shape1
#include <iostream>
#include <string>
#include <iomanip>                              //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
 
    long long num ;         cin >> num ;
    
    for(int i = 1 ; i <= num ; i++)
    {
        for(int j = num ; j >= i ; j--)
        {
            cout << "*" ;
        }
        cout << endl;
    }


    return 0 ;
}