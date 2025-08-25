//Write a program that demonstrates the difference between local and global 
// variables in C++. Use functions to show scope. 
// o Objective: Reinforce the concept of variable scope.
#include <iostream>
using namespace std;
int globalVar = 100;


void showVariables();

int main()
 {
    cout << "In main - Global variable: " << globalVar << endl;
    showVariables();

    return 0;
}
void showVariables() {
    int localVar = 50;  // Local variable
    cout << "Inside function - Local variable: " << localVar << endl;
    
}

