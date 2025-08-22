#include <iostream>
using namespace std;

int main() {
    // Implicit Conversion (Type Promotion)
    int intVal = 10;
    double doubleVal = 5.5;

    // int is promoted to double automatically
    double result1 = intVal + doubleVal;  

    cout << "Implicit Conversion:" << endl;
    cout << "intVal = " << intVal << endl;
    cout << "doubleVal = " << doubleVal << endl;
    cout << "Result (int + double) = " << result1 << " (int converted to double)" << endl;

    // Explicit Conversion (Type Casting)
    double num = 9.78;

    int result2 = (int)num;        // C-style casting
    int result3 = static_cast<int>(num); // C++ casting

    cout << "\nExplicit Conversion:" << endl;
    cout << "Original double num = " << num << endl;
    cout << "After C-style cast to int = " << result2 << endl;
    cout << "After static_cast<int>(num) = " << result3 << endl;

    return 0;
}

