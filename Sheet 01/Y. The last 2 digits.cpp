// Y. The last 2 digits
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
long long  a , b , c , d  , answer ;
cin>> a >> b >> c >> d ;
/*

answer = a*b*c*d ;
cout<< answer <<endl;

every number has a storage of bit is    10^9
answer = 10^9 *10^9 *10^9 *10^9 = 10^36  
 
 10^36   ====>  there is no have a data tybe contain this big value 10^36

so that we go to another method  =====> modulus
*/


//!  to get the first 2 digit we will make   % 100 

a %=100;             //?  a = a %100 .... etc 
b %=100;
c %=100;
d %=100;
  
answer = a * b * c * d ; 

if((answer%100) <=9)
{            // for example    answer = 07     ===> cout 7 and ignore zero    (int or long long value )     // so that we can print 0 at the start 
cout<<"0"<<answer%100<<endl;
}
else
{
cout<<answer%100<<endl;
}
 
    return 0 ;
}