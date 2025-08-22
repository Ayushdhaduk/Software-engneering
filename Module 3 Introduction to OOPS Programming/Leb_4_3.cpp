#include <iostream>
using namespace std;

int globalVar = 100;

void showScope() {
    int localVar = 50;  
    cout << "Inside showScope():" << endl;
    cout << "Local Variable = " << localVar << endl;
    cout << "Global Variable = " << globalVar << endl;
}

int main() {
    int localVar = 10;  
    cout << "Inside main():" << endl;
    cout << "Local Variable = " << localVar << endl;
    cout << "Global Variable = " << globalVar << endl;
    cout<< endl;

    showScope();

    globalVar = 200;
    cout << "\nAfter modifying globalVar in main():" << endl;
    cout << "Global Variable = " << globalVar << endl;

    return 0;
}

