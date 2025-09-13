#include <bits/stdc++.h>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Account Holder Name: ";
        cin >> name;
        cout << "Enter Initial Balance: ";
        cin >> balance;
        cout << "Account created successfully.\n";
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }

    void showAccount() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << "\n=== Simple Bank System ===\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Show Account\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            account.createAccount();
            break;
        case 2:
            account.deposit();
            break;
        case 3:
            account.withdraw();
            break;
        case 4:
            account.showAccount();
            break;
        case 5:
            cout << "Thank you for using the system.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}

