// P. Minimize Number
#include <iostream>
#include <string>
#include <iomanip>                               //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long size , result = 0 ;                    cin >> size;
    long long arr[size] ;      
    int flag = 0 ;   
    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i] ;
    }

    for(int i = 0 ; i < size ; i++)
    {
        long long counter = 0 ;

        if(arr[i] % 2 != 0)         // odd 
        {
            cout << 0 << endl;
            return 0 ;
        }
        while (arr[i] % 2 == 0)     // even 
        {
           counter++ ; 
           arr[i] /= 2 ;           // arr[i] = arr[i] / 2 ;
        }
        if(i == 0 || counter < result)
		{
			result = counter;
		}
    }

    cout << result << endl;

    return 0 ;
}