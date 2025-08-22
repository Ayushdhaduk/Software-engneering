// Write a C++ program that defines functions for basic arithmetic operations (add, 
// subtract, multiply, divide). The main function should call these based on user input.

#include <iostream>
using namespace std;

class arithmetic
{
	public:
	int add(int a , int b)
	{
		int add = a + b;
	}
	int sub(int a , int b)
	{
		int sub = a - b;
	}
	int multi(int a , int b)
	{
		int multi = a * b;
	}
	int div(int a , int b)
	{
		int div = a / b;
	}
};

int main()
{
	arithmetic a1;
	int a,b;
	cout<<"Enter The Value of a :";
	cin>>a;
	cout<<"Enter The Value Of b :";
	cin>>b;
	
	cout<<"Your Sum Is :"<<a1.add(a,b)<<endl;
	cout<<"Your Sub Is :"<<a1.sub(a,b)<<endl;
	cout<<"Your multi Is :"<<a1.multi(a,b)<<endl;
	cout<<"Your div Is :"<<a1.div(a,b)<<endl;
	return 0;
}
