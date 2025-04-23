// B. Searching
#include <iostream>
#include <string>
#include <iomanip>                               //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long size , search = 0 , flag = 0  ;
    cin >> size ;
    long long arr[size] ;
    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i] ; 
    }
    cin >> search ;
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == search) 
        {
            cout << i << endl;
            flag = 1 ;             // found the element that i want to search it 
            break;
        }
    }
    if(flag == 0)
    {
        cout << -1 << endl;         // not found the element that i want to search it 
    }



    return 0 ;
}