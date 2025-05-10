// This program allows a user to withdraw or deposit money from their account.
// It checks if the withdrawal amount exceeds the balance and displays the current balance after each transaction.



#include <iostream>
using namespace std;

void showbalance(double balance);

int main() {
    string name, n;
    int withdraw, deposit;
    double balance = 1000;

    cout << "Enter your name: ";
    cin >> name;

    while (true) {
        cout << "Wanna withdraw or deposit (w/d), to exit (y): ";
        cin >> n;

        if (n == "w" || n == "W") {
            cout << "Enter the amount you want to withdraw: ";
            cin >> withdraw;
            if (withdraw > balance) {
                cout << "Exceeding the bank balance" << endl;
            } else {
                balance -= withdraw;
                cout << "You have withdrawn: " << withdraw << endl;
                showbalance(balance);
            }
        } else if (n == "d" || n == "D") {
            cout << "Enter the amount you want to deposit: ";
            cin >> deposit;
            balance += deposit;
            cout << "You have deposited: " << deposit << endl;
            showbalance(balance);
        } else if (n == "y" || n == "Y") {
            cout << "Thank you for using our service, " << name << "!" << endl;
            break;
        } else {
            cout << "Invalid input, please try again." << endl;
        }
    }

    return 0;
}

void showbalance(double balance) {
    cout << "Your current balance is: " << balance << endl;
}

