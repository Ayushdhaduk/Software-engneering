//Variables and Constants 
//o Write a C++ program that demonstrates the use of variables and constants. Create 
//variables of different data types and perform operations on them. 
//o Objective: Understand the difference between variables and constants.

#include <iostream>
using namespace std;

int main() {
 
    int age = 20;
    float height = 5.9;
    char grade = 'A';
    double salary = 25000.50;

    const double PI = 3.14159;

    cout << "Initial Values:" << endl;
    cout << "Age = " << age << endl;
    cout << "Height = " << height << endl;
    cout << "Grade = " << grade << endl;
    cout << "Salary = " << salary << endl;
    cout << "Constant PI = " << PI << endl;

    age = 25;       
    height = 6.1;   
    grade = 'B';    
    salary = salary + 5000;  


    cout << "\nAfter Modification:" << endl;
    cout << "Age = " << age << endl;
    cout << "Height = " << height << endl;
    cout << "Grade = " << grade << endl;
    cout << "Salary = " << salary << endl;
    cout << "Constant PI (unchanged) = " << PI << endl;

    return 0;
}

