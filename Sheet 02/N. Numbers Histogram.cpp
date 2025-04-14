// N. Numbers Histogram
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    char s ;        // symbole 
    int size ;         // number of lines ;
    cin >>  s >> size ;

    for(int i = 0 ;i < size  ; i++)
    {
        int num ;              cin >> num ;
        for(int j = 1 ; j <= num ; j++)
        {
            cout<< s ;
        }
        cout << endl;
    }


    return 0 ;
}