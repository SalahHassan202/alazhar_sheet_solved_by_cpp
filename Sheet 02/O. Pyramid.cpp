// O. Pyramid
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int num ;         cin >> num ;
    for(int i = 0 ; i < num ; i++)               // row 
    {
        for(int j = 0 ; j <= i ; j++)            // column 
        {
            cout << "*" ;
        }
        cout<< endl;
    }

    return 0 ;
}