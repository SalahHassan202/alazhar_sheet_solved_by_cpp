// D. Fixed Password
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int password = 1999 ;
    while(cin >> password)
    {
        if(password == 1999)
        {
                cout<< "Correct" << endl;
                break ; 
        }
        else
        {
                cout<< "Wrong" << endl;
        }
    }


    return 0 ;
}