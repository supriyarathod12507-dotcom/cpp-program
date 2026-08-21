#include <iostream>
using namespace std;

int main()
{
    int n1, d1, n2, d2;
    int add, sub, d;

    cout << "Enter first fraction: ";
    cin >> n1 >> d1;

    cout << "Enter second fraction: ";
    cin >> n2 >> d2;

    d = d1 * d2;

    add = (n1 * d2) + (n2 * d1);
    sub = (n1 * d2) - (n2 * d1);

    cout << "Addition = " << add << "/" << d << endl;
    cout << "Subtraction = " << sub << "/" << d;

    return 0;
}