// E. Max
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long size ;             cin >> size ;
    long long arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i] ;
    }

    sort(arr , arr + size) ;

    cout<< arr[size-1] << endl;


    /*

    another solution 

    int counter = 0 ,  max =0 ;            cin>>counter;

    for(int i=0 ; i<=counter ; i++)
    {
        int num ;
        cin>>num;
        if(i ==0)
        {
            max =num;
        }
        if(num>max)
        {
            max =num ;
        }
    }

    cout<<max<<endl;
    
    */

    return 0 ;
}