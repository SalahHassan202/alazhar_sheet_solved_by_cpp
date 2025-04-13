// H. One Prime
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    /*

    prime number =====>A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.
    prime number divisible only by 1 and itself.
    Be careful that 1 is not prime .

    2
    2>1
    2/1 =2      2/2=1
    .............................
    3      
    3>1
    3/1=3       3/3 =1
    .............................
    5
    5>1
    5/1=5       5/5=1
    .............................         etc......

    */

   long long num ;             cin >>  num ;
   int flag = 0 ;
   for(int i = 2 ; i <= num/2 ; i++)
   {
        if(num % i == 0)
        {
            flag = 1 ;
        }
       
   }
   if(flag == 1)     // flag = 1 ;
   {
        cout << "NO" << endl;
   }
   else
   {
        cout << "YES" << endl;
   }

    return 0 ;
}