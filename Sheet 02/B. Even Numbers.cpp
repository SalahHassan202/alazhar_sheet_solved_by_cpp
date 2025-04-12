// B. Even Numbers
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long num ;           cin >> num ;
    for(int i = 2 ; i <= num ; i+=2)
    {
        cout << i << endl;
    }

    if(num == 0 || num == 1)
    {
        cout << -1 << endl;
    }
     

    return 0 ;
}