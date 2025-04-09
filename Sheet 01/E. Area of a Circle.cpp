// E. Area of a Circle
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    double redius , area ;
    cin >> redius ;
    area = 3.141592653 * redius * redius ;
    cout<< fixed << setprecision(9) << area << endl;
   
    return 0 ;
}


