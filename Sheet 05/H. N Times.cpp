// H. N Times
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;

void print (int times , char x )
{
	for(int i = 1 ;i <=times ; i++)
	{
		cout<<x<<" ";
	}
}

int main()
{
    
	int lines , times ;
	cin>>lines ;
	char x ;

	while(lines--)
	{
		cin>>times>>x;
		print(times , x );
		cout<<endl;
	
	}


    return 0 ;
}