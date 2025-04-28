// W. Mirror Array
#include <iostream>
#include <string>
#include <iomanip>                               //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long row , col ;
    cin >> row >> col;

    while(row--)
    {
        int array[col];
        for(int i=0 ;i <col ; i++)
        {
            cin>>array[i];
        }
        for(int i=col-1 ;i>=0 ; i--)
        {
           cout<<array[i]<<" ";
        }
        cout<<endl;
    }


    return 0 ;
}