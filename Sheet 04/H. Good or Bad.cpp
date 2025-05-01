// H. Good or Bad
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
int main()
{
  int t ;                     cin >> t ;          // testcases ;
 
     while(t--)
    {
        string num;          cin>>num;
      
        int flag = 0;

        for(int i =0 ; i< num.size() ; i++)
        {
            if(num[i]=='0' && num[i+1]=='1' && num[i+2]=='0' || num[i]=='1' && num[i+1]=='0' && num[i+2]=='1' ) 
            {
               flag =1;
            }
           
        }

        if(flag ==1)
        {
            cout<<"Good"<<endl;
        }
        else
        {
            cout<<"Bad"<<endl;
        }
    }




  return 0 ;
   
}
