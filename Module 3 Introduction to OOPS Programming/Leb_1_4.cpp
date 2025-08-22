//Write a program that asks for two numbers and displays their sum. Ensure this is 
//done after setting up the IDE (like Dev C++ or CodeBlocks). 
//o Objective: Help students understand how to install, configure, and run programs 
//in an IDE. 


#include<iostream>
#include<string>

using namespace std;

int sum(int a ,int b)
{
	int sum = a + b;
	return sum;
}


int main()
{
	int a , b ;
	cout<<"Enter The 1St Number :";
	cin>>a;
	cout<<"Enter The 2ed Number :";
	cin>>b;
	cout<<"Your Sum is : "<<sum(a , b);
	return 0;
}
