// O. Fibonacci
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
int main()
{
    long long  pos ;              // position
    cin>>pos ;
    long long start =0 , sec =1 ;         // start     & second 
 
    if (pos==1)
    {
        cout<< start <<endl;
    }
    else if( pos==2)
    {
        cout<<sec<<endl;
    }
    else
    {
        for(int i =3 ; i<= pos ;i++)           // i =3 because the start = 0 && the sec = 1 =====> so that i =3 
        {
            long long result = start + sec ;
            start =sec;
            sec= result;
 
        }
        cout<< sec <<endl;
    }
 
 
    return 0 ;
}