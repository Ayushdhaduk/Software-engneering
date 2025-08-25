//Write a program that prints a right-angled triangle using stars (*) with a nested loop. 
// o Objective: Learn nested control structures. 
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop ? handles number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop ? prints stars for each row
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; // Move to next line after each row
    }

    return 0;
}


