// Create a class BankAccount with data members like balance and member functions 
// like deposit and withdraw. Implement encapsulation by keeping the data members 
// private. 
// o Objective: Understand encapsulation in classes.

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  

public:
    
    BankAccount() {
        balance = 1000;  
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "Current Balance = " << balance << endl;
    }
};

int main() {
    BankAccount acc;  
    int choice;
    double amount;

    do {
        cout << "\n=== Bank Menu ===\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Show Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                acc.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                acc.withdraw(amount);
                break;

            case 3:
                acc.display();
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}


