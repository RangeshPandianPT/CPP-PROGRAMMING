/*Jnani, an officer at City Union Bank, is responsible for opening new accounts. Initially, each account is opened with a zero balance. After one month, she must generate and submit the balance status of each account to the circle office.

You are required to help Janani by writing a C++ program that:

Uses constructor overloading:
A default constructor to indicate a new account is opened with zero balance.
A parameterized constructor that accepts a float input representing the current balance after one month and determines the balance status:
"Has a Positive Balance" if the balance is greater than 0.
"Has a Negative Balance" if the balance is less than 0.
"Has a Zero Balance" if the balance is 0.
Reads a float input from the user which represents the balance after one month.
Prints:
"Zero Balance" (when the account was opened).
The appropriate balance status after one month. */


#include <iostream>
using namespace std;

class Account {
private:
    float balance;

public:
    
    Account() {
        balance = 0.0;
        cout << "Zero Balance" << endl;
    }

    
    Account(float b) {
        balance = b;

        if (balance > 0.0)
            cout << "Has a Positive Balance" << endl;
        else if (balance < 0.0)
            cout << "Has a Negative Balance" << endl;
        else
            cout << "Has a Zero Balance" << endl;
    }
};

int main() {
    float currentBalance;
    cin >> currentBalance;

   
    Account acc1;

    
    Account acc2(currentBalance);

    return 0;
}
