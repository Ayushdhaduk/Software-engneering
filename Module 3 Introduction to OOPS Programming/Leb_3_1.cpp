//Write a C++ program that takes a student’s marks as input and calculates the grade 
//based on if-else conditions. 
//o Objective: Practice conditional statements (if-else).


#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter student's marks (0 - 100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 80) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 50) {
        cout << "Grade: D" << endl;
    }
    else if (marks >= 0) {
        cout << "Grade: F (Fail)" << endl;
    }
    else {
        cout << "Invalid input! Marks should be between 0 and 100." << endl;
    }

    return 0;
}

