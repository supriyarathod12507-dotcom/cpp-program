#include <iostream>
#include <string>
using namespace std;

class SavingAccount {
private:
    string name;
    int accNo;
    double balance, rate;

public:
    SavingAccount(string n, int a, double b, double r) {
        name = n; accNo = a; balance = b; rate = r;
    }

    void deposit(double amt) {
        if (amt > 0) {
            balance += amt;
            cout << "Deposited: ₹" << amt << endl;
        }
    }

    void withdraw(double amt) {
        if (amt > 0 && amt <= balance) {
            balance -= amt;
            cout << "Withdrawn: ₹" << amt << endl;
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    void applyInterest() {
        double interest = balance * rate / 100;
        balance += interest;
        cout << "Interest Applied: ₹" << interest << endl;
    }

    void display() {
        cout << "\n[Savings Account]\n";
        cout << "Holder  : " << name << endl;
        cout << "Acc No  : " << accNo << endl;
        cout << "Balance : ₹" << balance << endl;
        cout << "Rate    : " << rate << "%\n";
    }
};

class CheckingAccount {
private:
    string name;
    int accNo;
    double balance, fee;

public:
    CheckingAccount(string n, int a, double b, double f) {
        name = n; accNo = a; balance = b; fee = f;
    }

    void deposit(double amt) {
        if (amt > 0) {
            balance += amt;
            cout << "Deposited: ₹" << amt << endl;
        }
    }

    void withdraw(double amt) {
        if (amt + fee <= balance) {
            balance -= (amt + fee);
            cout << "Withdrawn: ₹" << amt << " (Fee ₹" << fee << ")\n";
        } else {
            cout << "Insufficient balance + fee!\n";
        }
    }

    void display() {
        cout << "\n[Checking Account]\n";
        cout << "Holder  : " << name << endl;
        cout << "Acc No  : " << accNo << endl;
        cout << "Balance : ₹" << balance << endl;
        cout << "Fee     : ₹" << fee << endl;
    }
};

int main() {
    SavingAccount sav("Alice", 1001, 5000, 3.0);
    CheckingAccount chk("Bob", 1002, 3000, 20);

//     sav.display();
//     sav.deposit(1000);
//     sav.withdraw(2000);
//     sav.applyInterest();
//     sav.display();

//     chk.display();
//     chk.deposit(1500);
//     chk.withdraw(1000);
//     chk.display();
//     return 0;
// }

// [Savings Account]
// Holder  : supriya 
// Acc No  : 1001
// Balance : ₹5000
// Rate    : 3%

// Deposited: ₹1000
// Withdrawn: ₹2000
// Interest Applied: ₹120

// [Savings Account]
// Holder  : supriya 
// Acc No  : 1001
// Balance : ₹4120
// Rate    : 3%

// [Checking Account]
// Holder  : om
// Acc No  : 1002
// Balance : ₹3000
// Fee     : ₹20

// Deposited: ₹1500
// Withdrawn: ₹1000 (Fee ₹20)

// [Checking Account]
// Holder  : om
// Acc No  : 1002
// Balance : ₹3480
// Fee     : ₹20