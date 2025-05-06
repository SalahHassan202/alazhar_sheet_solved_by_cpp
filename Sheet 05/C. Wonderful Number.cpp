// C. Wonderful Number
#include <iostream>
#include <string>
#include <iomanip>                                //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;

int index = 0;
int *binary (int num)
{
	int bi[100]; // [1, 1, , .......]
	
	while(num != 0){
		bi[index] = num%2;
		num /= 2;               // num = num /2; 0
		index++;                // 2
	}

	return bi;
}
bool palindrome(int arr[]){
	
	for(int i=0,z=index-1;i<index,z>=0;i++,z--)
    {
		if(arr[i] != arr[z]){
			return false;
		}
	}
	
	return true;
}
 
int main()
 {

    // A number is wonderful if this number is odd and its binary representation is palindrome.

	int num;                   cin>>num; 
	if(num % 2 == 0)
    {  
		cout<<"NO"<<endl;
		return 0;
	}
	
	int index = 0;
	int bi[100]; 
	
	while(num != 0)
    {
		bi[index] = num%2;
		num /= 2;
		index++; 
	}
	
	for(int i=0,z=index-1;i<index,z>=0;i++,z--)
    {
		if(bi[i] != bi[z])
        {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	
	cout<<"YES"<<endl;
	
	return 0;
}