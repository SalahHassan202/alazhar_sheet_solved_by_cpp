// I. Welcome for you with Conditions
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    //  Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".
    
    long long num1 , num2 ;              cin >> num1 >> num2 ;
    if (num1 >= num2)
    {
    cout<< "Yes" << endl;
    }
    else
    {
    cout << "No" << endl;
    }

    return 0 ;
}


