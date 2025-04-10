// O. Calculator
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    long long a , b ;          // a , b are two numbers 
    char sign ; 
    cin >> a >> sign >> b ;

    switch(sign)
    {
        case '+' :
            cout<< (a+b) << endl;
            break ;
        case '*' :
            cout<< (a*b) << endl;
             break ;
        case '-' :
            cout<< (a-b) << endl;
            break;
        case '/' :
            cout<< (a/b) << endl;
            break;
    }




    return 0 ;
}