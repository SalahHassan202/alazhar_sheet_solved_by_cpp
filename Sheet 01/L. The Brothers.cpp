// L. The Brothers
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    /*
    Input
    First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.

    Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

    Output
    Print "ARE Brothers" if they are brothers otherwise print "NOT".
    */

   
    string f1 , s1 ;         // first person
    cin >> f1 >> s1 ;
    string f2 , s2 ;        // second person
    cin >> f2 >> s2 ; 
    
    if (s1 == s2 )
    {
        cout<< "ARE Brothers" << endl;
    }
    else
    {
        cout<< "NOT" << endl;
    }

    


    return 0 ;
}


