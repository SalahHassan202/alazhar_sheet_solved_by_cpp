// K. Divisors
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long num ;            cin >> num ;
    for(int i = 1 ; i <= num ; i++)
    {
        if(num % i == 0)
        {
            cout<< i << endl;
        }
    }
  
    return 0 ;
}