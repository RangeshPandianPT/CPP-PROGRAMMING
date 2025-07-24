/* Design a Bank Account class where:
• The account should be initialized with an account number and balance.
• The account should support:
o Constructor Overloading for creating different types of accounts.
o Function Overloading to deposit and withdraw using different data types.
o Operator Overloading to compare two accounts based on balance.
 Implement a BankAccount class that meets these requirements. */
 
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum) {
        accountNumber = accNum;
        balance = 0.0;
    }

    BankAccount(string accNum, double initBalance) {
        accountNumber = accNum;
        balance = initBalance;
    }

    void deposit(int amount) {
        balance += amount;
        cout << "Deposited (int): " << amount << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited (double): " << amount << endl;
    }

    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn (int): " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn (double): " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() const {
        cout << "Account Number: " << accountNumber
             << ", Balance: " << balance << endl;
    }

    bool operator>(const BankAccount& other) const {
        return balance > other.balance;
    }

    bool operator<(const BankAccount& other) const {
        return balance < other.balance;
    }

    bool operator==(const BankAccount& other) const {
        return balance == other.balance;
    }
};

int main() {
    BankAccount acc1("A1001", 500.0); 
    BankAccount acc2("A1002");        

    acc1.deposit(200);      
    acc2.deposit(150.75);   

    acc1.withdraw(100);     
    acc2.withdraw(50.25);   

    acc1.display();
    acc2.display();

   
    if (acc1 > acc2) {
        cout << "Account 1 has more balance than Account 2." << endl;
    } else if (acc1 < acc2) {
        cout << "Account 2 has more balance than Account 1." << endl;
    } else {
        cout << "Both accounts have equal balance." << endl;
    }

    return 0;
}
