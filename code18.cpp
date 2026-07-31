#include <iostream>
using namespace std;

int main() {
    int num, temp, rem, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    if (temp == reverse)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}