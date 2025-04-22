// V. PUM
#include <iostream>
#include <string>
#include <iomanip>                               //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long num ;              cin >> num ;
    long long counter = 1 ;
    for(int i = 0 ; i < num ; i++)
    {
        if(counter % 4 == 0)
        {
            counter++;
            cout << "PUM" << endl;
            i-- ;
            continue ;
            
        }
    
        cout << counter++ << " " << counter++ << " "  << counter++ << " "  ;
    }
    
 cout << "PUM"<< endl;       // to print the PUM in the last row only 
 
    return 0 ;
}