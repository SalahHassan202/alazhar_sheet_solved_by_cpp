// R. Age in Days
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

   
    long long age ;                cin >> age ;
    long long years = 0 , months = 0 , days = 0 ;

    // calculate years 
    years = age / 365 ;                // years == ???
    age -= years * 365 ;           // age = age - ( years * 365 ) ;

    cout<< years << " years" << endl;

    // calculate months 
    months = age / 30 ;             // months == ???
    age -= months * 30 ;           // age = age - ( months * 30 ) ;

    cout << months << " months" << endl;

    // calculate days 
    days = age ; 

    cout << days << " days" << endl;



    return 0 ;
}