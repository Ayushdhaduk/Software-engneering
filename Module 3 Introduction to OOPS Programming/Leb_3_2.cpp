//Write a C++ program that asks the user to guess a number between 1 and 100. The 
//program should provide hints if the guess is too high or too low. Use loops to allow 
//the user multiple attempts. 
//o Objective: Understand while loops and conditional logic. 

#include <iostream>
using namespace std;

int main() {
    int secretNumber = 42;  // Fixed number instead of random
    int guess;

    cout << "Guess the number between 1 and 100!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "?? Congratulations! You guessed the correct number." << endl;
            break; 
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Too low! Try again." << endl;
        }
    }

    return 0;
}

