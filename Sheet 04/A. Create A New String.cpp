// A. Create A New String
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
int main()
{
    
    string word1 , word2 ;
    cin >> word1 >> word2 ;

    cout << word1.size() << " " << word2.size() << endl;
    cout << word1  << " " << word2 << endl;
    
    return 0 ;
}