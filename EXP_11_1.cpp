#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0)
            throw "Negative number not allowed!";
        cout << "You entered: " << num << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}

// Enter a number: -5
// Negative number not allowed!