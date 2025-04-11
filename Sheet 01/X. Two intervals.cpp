// X. Two intervals
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

     /*
     
     1 3   5 6   ==> there is no intersection between them because 
     a =1   < c =5   && a =1   <d =6


     ______________                  a>c    && b>d       |                                            ______________      c> a && d>b
     a           b                                         |                                           a            c
                                                  or       |           
                         ______________                     |
                         c            d                   |               ______________
                                                            |               c           d

     */
     
     
   
     long long a , b , c , d , start = 0 , end = 0  ;               // a , b , c , d are 4 numbers   
     cin >> a >> b >> c >> d ;

     if((b<c  && b<d)   ||  (a>c && a>d)  )
     {
     cout<< -1<<endl;
     }

     else 
     {
    if(a > c)
    {
        start=a;
    }
    else
    {
        start =c;
    }
    if(b>d)
    {
        end=d;
    }
    else 
    {
        end=b;
    }

    cout<< start << " "<<end<<endl;
}



    return 0 ;
}