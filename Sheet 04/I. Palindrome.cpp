// I. Palindrome
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
int main()
{

  // Note: A string is said to be a palindrome if the reverse of the string is same as the string.
  // For example, "abba" is palindrome, but "abbc" is not palindrome.

  string word ;                cin >> word ;
  long long size = word.size() ;
 
  for(int i = 0 ; i < size /2; i++)
  {
    // we compare element of string by each other ===> right with left ===> 
    // so that each turn we use two element one from right and one from left ===> so that we use size/2
    if(word[i] != word[size - i - 1])
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  
    cout << "YES" << endl;
  

  return 0 ;
   
}
