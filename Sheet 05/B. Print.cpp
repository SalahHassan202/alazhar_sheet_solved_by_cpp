// B. Print
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
void print ( int x )
{
    for(int i = 1 ; i <= x ; i++)
    {
        if(i != 1)
        {
            cout << " " ;
        }
        cout << i ;
    }
}
int main()
{
    
    int a ;
    cin >> a  ;
    print(a) ;
    
    return 0 ;
}