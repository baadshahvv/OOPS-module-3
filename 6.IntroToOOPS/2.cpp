#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initial) { balance = initial; }
    void deposit(double amount) { balance += amount; }
    void withdraw(double amount) { balance -= amount; }
    double getBalance() { return balance; }
};

main() {
    double initial;
    cout << "Enter initial balance: ";
    cin >> initial;
    BankAccount account(initial);
    double amt;
    cout << "Enter deposit amount: ";
    cin >> amt;
    account.deposit(amt);
    cout << "Enter withdrawal amount: ";
    cin >> amt;
    account.withdraw(amt);
    cout << "Current balance: " << account.getBalance() << "\n";
}
