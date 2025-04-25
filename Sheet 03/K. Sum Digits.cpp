// K. Sum Digits
#include <iostream>
#include <string>
#include <iomanip>                               //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long size , sum = 0 ;                    cin >> size ;
    string num ;                       cin >> num ;         // "13305"   ===> num['1' , '3' , '3' , '0' , '5' ]

    for(int i = 0 ; i < num.size() ; i++)
    {
        sum = sum + num[i] - '0';
    }

    cout << sum << endl; 

    
    
    return 0 ;
}