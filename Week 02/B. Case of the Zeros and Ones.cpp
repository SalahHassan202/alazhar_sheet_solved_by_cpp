// B. Case of the Zeros and Ones
#include<iostream>
using namespace std ;
int main()
{
    int size , zeros = 0 , ones = 0; 
    string number ;

    cin >> size >> number ;

    for(int i = 0 ; i <number.size() ; i++)
    {
      if(number[i] == '0')
      {
        zeros++;
      }
      else if(number[i] == '1')
      {
        ones++ ; 
      }
    }
    cout <<size - (2 * min(zeros , ones)) << endl; ;
}