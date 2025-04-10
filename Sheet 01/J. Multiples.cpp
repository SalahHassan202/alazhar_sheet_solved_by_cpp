// J. Multiples
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    // Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

    long long num1 , num2 ;              cin >> num1 >> num2 ;
    
    if(num1 % num2 == 0 || num2 % num1 == 0)
    {
        cout << "Multiples" << endl;
    }
    else
    {
        cout<< "No Multiples" << endl;
    }


    return 0 ;
}


