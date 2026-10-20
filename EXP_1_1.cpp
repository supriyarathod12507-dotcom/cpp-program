#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int units;
    double bill = 0;

    cout << "Enter Consumer Name: ";
    getline(cin, name);
    cout << "Enter Units Consumed: ";
    cin >> units;

    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = 100 * 5 + (units - 100) * 7;
    else if (units <= 300)
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    else
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;

    cout << "\nConsumer Name : " << name << endl;
    cout << "Units         : " << units << endl;
    cout << "Payable Amount: ₹" << bill << endl;
    return 0;
}

// Enter Consumer Name: Supriya Rathod 
// Enter Units Consumed: 250

// Consumer Name : Supriya Rathod 
// Units         : 250
// Payable Amount: ₹2200