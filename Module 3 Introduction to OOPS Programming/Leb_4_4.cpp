// Write a C++ program that accepts an array of integers, calculates the sum and 
// average, and displays the results. 

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];   // Array of size n
    int sum = 0;

    // Input array elements
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Calculate sum
    }

    // Calculate average
    double average = (double)sum / n;

    // Display results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

