//POP vs. OOP Comparison Program 
//o Write two small programs: one using Procedural Programming (POP) to calculate the 
//area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
//class and object for the same task. 
//o Objective: Highlight the difference between POP and OOP approaches. 

#include<iostream>
#include<string>

using namespace std;

class rectengle
{
	int length ;
	int width ;
	
	public:
		int setvalue(int l, int w)
		{
			length = l;
			width = w;	
		}
		int calarea()
		{
			int area = length * width ;
			return area;
			}	
};

int rectangle(int length , int width)
{
	int area = length * width ;
	return area ;
}

int main()
{
	int length , width ;
	cout<<"Enter The Length :";
	cin>>length;
	cout<<"Enter The Width :";
	cin>>width;
	
	cout<<"\n";
	cout<<"Your Area Is :"<<rectangle(length,width)<<" using pop"<<endl;;

	rectengle r1;
	
	r1.setvalue(length,width);
	cout<<"Your Area Is :"<<r1.calarea()<<" using oop"<<endl;

return 0;
}
