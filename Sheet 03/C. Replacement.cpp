// C. Replacement
#include <iostream>
#include <string>
#include <iomanip>                               //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long size , search = 0  ;
    cin >> size ;
    long long arr[size] ;
    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i] ; 
    }

    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] < 0) 
        {
            arr[i] = 2 ;
        }
        else if (arr[i] > 0)
        {
            arr[i] = 1 ;
        }
        else     // arr[i] == 0
        {
            arr[i] = 0 ;
        }
    }

    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }


    return 0 ;
}