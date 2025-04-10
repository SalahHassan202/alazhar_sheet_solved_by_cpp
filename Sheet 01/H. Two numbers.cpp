// H. Two numbers
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    /*
    
    Floor: Is a mathematical function that takes a real number X
    and its output is the greatest integer less than or equal to X
    
    Ceil: Is a mathematical function that takes a real number X
    and its output is the smallest integer larger than or equal to X
    
    Round: Is a mathematical function that takes a real number X
    and its output is the closest integer to that number X
    

    */

   double num1 , num2 ; 
   cin >> num1 >> num2 ;
   double answer = 0.0 ;
   answer = num1/num2 ;

   cout<< "floor "<<num1 <<" / " << num2 <<" = " << floor(answer) << endl ;
   cout<< "ceil "<<num1 <<" / " << num2 <<" = " << ceil(answer) << endl ;
   cout<< "round "<<num1 <<" / " << num2 <<" = " << round(answer) << endl ;


    return 0 ;
}


