//Basic Input/Output 
//o Write a C++ program that accepts user input for their name and age and then 
//displays a personalized greeting. 
//o Objective: Practice input/output operations using cin and cout. 

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name ,age;
	
	cout<<"Enter Your Name :";
	cin>>name;
	cout<<"Enter Your Age :";
	cin>>age;
	
	cout<<"\n\n";
	
	cout<<"Welcome "<<name<<endl<<"Your Age Is :"<<age<<endl;
	
	return 0;
}
