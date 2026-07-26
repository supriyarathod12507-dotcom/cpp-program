#include <iostream>
using namespace std;

int main() {
    int n, i = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "First " << n << " natural numbers are:" << endl;

    while (i <= n) {
        cout << i << " ";
        i++;
    }

    return 0;
}