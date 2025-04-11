// Q. Coordinates of a Point
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    double x , y  ;          //  two numbers X, Y which donate coordinates of a point in 2D plan.  
    cin >> x >> y ; 

    if(x == 0 && y == 0)
    {
        cout << "Origem" << endl;
    }
    else if ((x == 0 && y > 0 )  || ( x == 0 && y < 0))   // (x == 0 && y != 0)
    {
        cout<< "Eixo Y" << endl;
    }
    else if ((x > 0  && y == 0 )  || ( x < 0 && y == 0))   // (x != 0 && y == 0)
    {
        cout<< "Eixo X" << endl;
    }
    else if(x > 0 && y > 0)
    {
        cout << "Q1" << endl;
    }
    else if (x <  0 && y > 0)
    {
        cout << "Q2" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "Q3" << endl;
    }
    else        //  (x > 0 && y < 0)
    {
        cout << "Q4" << endl;
    }




    return 0 ;
}