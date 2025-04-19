// Q. Digits
#include <iostream>
#include <string>
#include <iomanip>                               //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
 
    long long t ;                 cin >> t ;           // number of test cases 
    while(t--)
    {
        string num ;              cin >> num ;
        for(int i = num.size() - 1  ; i >= 0 ; i--)
        {
            cout<< num[i] << " " ;
        }
        cout << endl; 

    }


    return 0 ;
}