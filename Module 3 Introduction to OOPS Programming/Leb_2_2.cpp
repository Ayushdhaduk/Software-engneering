// Write a C++ program that performs both implicit and explicit type conversions and 
// prints the results. 
#include <iostream>
using namespace std;

int main() {
    
    int a = 10;
    float b = a;  
    cout << "Implicit Conversion : " << b << endl;

    
    float c = 9.78;
    int d = (int)c;  
    cout << "Explicit Conversion : " << d << endl;

    return 0;
}
