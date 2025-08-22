//Write a program that implements inheritance using a base class Person and derived 
//classes Student and Teacher. Demonstrate reusability through inheritance.

#include <iostream>
using namespace std;


class Person {
	protected:
    	string name;
    	int age;

public:
    
    Person(string n, int a) 
	{
        name = n;
        age = a;
    }

    
    void displayPersonInfo() 
	{
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Student : public Person 
{
	private:
    	string course;

public:
    Student(string n, int a, string c) : Person(n, a) 
	{
        course = c;
    }

    void displayStudentInfo() {
        cout << "\n--- Student Info ---" << endl;
    
	    displayPersonInfo();  
    
	    cout << "Course: " << course << endl;
    }
};


class Teacher : public Person 
{
	private:
    	string subject;

public:
    Teacher(string n, int a, string s) : Person(n, a) 
	{
        subject = s;
    }

    void displayTeacherInfo() 
	{
        cout << "\n--- Teacher Info ---" << endl;
        
		displayPersonInfo();  
        
        cout << "Subject: " << subject << endl;
    }
};


int main() {

    Student s1("Ayush", 20, "Computer Science");

    Teacher t1("Mr. Dhruv", 40, "Computer Science");


    s1.displayStudentInfo();

    t1.displayTeacherInfo();

    return 0;
}

