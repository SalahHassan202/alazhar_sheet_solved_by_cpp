// B. Let's use Getline
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
int main()
{

    string word ;
    getline(cin , word ) ;
    
    for(int i = 0 ; i < word.size() ; i++)
    {
        if(word[i] ==  '\\' )
        {
            break ; 
        }  
        cout << word[i] ;

    }
    
    return 0 ;
}