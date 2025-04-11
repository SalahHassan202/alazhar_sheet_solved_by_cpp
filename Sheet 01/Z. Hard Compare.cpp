// Z. Hard Compare
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

 /* 
 
     this way dosn't work              
     wrong answer on test 8 
 
     long long a , b , c , d  ;        // a , b , c , d  are 4 numbers 
     cin >> a >> b >> c >> d ;

     if( (a^b ) > (c^d) )
     {
          cout<< "YES" << endl;
     }
     else
     {
          cout<< "NO" << endl;
     }

 */

     //!   so we need to fid another way to solve it 

     // ? this way is log  =====>       // 2^3 =8      ====>  log ( 2^3)  = 3* log(2)

     double a , b , c , d , result1 = 0 , result2 = 0   ;        // a , b , c , d  are 4 numbers 
     cin >> a >> b >> c >> d ;

     result1 = b * log(a) ; 
     result2 = d * log(c) ;

     if(result1 >result2 )
     {
          cout << "YES" << endl;
     }
     else        // (result1 <= result2)
     {
          cout << "NO" << endl;
     }


    return 0 ;
}