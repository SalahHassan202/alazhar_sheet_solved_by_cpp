// W. Mathematical Expression
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long a , b , c ;              // a , b , c are three numbers 7
    char s1 , s2 = '=' ;
    cin >> a >> s1 >> b >> s2 >> c ;

    if(s1 == '+')
    {
        if((a+b) == c)
        {
            cout<< "Yes" << endl;
        }
        else
        {
            cout<< ( a + b ) << endl;
        }
    }
    else if(s1 == '-')
    {
        if((a-b) == c)
        {
            cout<< "Yes" << endl;
        }
        else
        {
            cout<< ( a - b ) << endl;
        }
    }
    else if(s1 == '*')
    {
        if((a*b) == c)
        {
            cout<< "Yes" << endl;
        }
        else
        {
            cout<< ( a * b ) << endl;
        }
    }
    


    return 0 ;
}