// F. Way Too Long Words
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
int main()
{
  int t ;            cin >> t ;        // testcases 

  while(t--)
  {
    string word ;                cin >> word ;

    for(int i = 0 ; i < word.size() ; i++)
    {

      if(word.size() <= 10)
      {
        cout << word << endl;
        break;
      }
      else
      {
        cout << word[0] << word.size()-2 << word[word.size()-1] << endl;
        break ;
      }
      
    }

  }


  return 0 ;
   
}


