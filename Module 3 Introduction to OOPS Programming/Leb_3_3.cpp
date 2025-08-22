//Write a C++ program to display the multiplication table of a given number using a for 
//loop. 
#include <iostream>
using namespace std;

int main()
{
	int a , n ;
	cout<<"Enter The Number Of Table : ";
	cin>>a;
	cout<<"Enter The Number of Time You won't : ";
	cin>>n;
	
	
	for(int i=1 ;i<=a; i++)
	{
		cout<<a<<" * "<<i<<" = "<<a*i<<endl;;	
	}
	
	
	return 0;
}
