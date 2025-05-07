// G. Max and MIN
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;

int sorting(int arr[] , int size )
{
	sort(arr , arr+size);
	
}


int main()
{
    int size , min =0 , max =0 ;
	cin>>size;
	int arr[size];
    
	for(int i =0 ; i<size ;i++)
	{
		cin>>arr[i];
	}

	sorting( arr ,size);
	cout<<arr[0]<<" "<<arr[size-1]<<endl;
    

    return 0 ;
}