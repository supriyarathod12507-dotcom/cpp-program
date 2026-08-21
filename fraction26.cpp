#include <iostream>
using namespace std;

class Fraction
{
    int n, d;

public:
    void input()
    {
        cin >> n >> d;
    }

    void addition(Fraction f)
    {
        cout << "Addition = "
             << (n * f.d + f.n * d) << "/" << (d * f.d) << endl;
    }

    void subtraction(Fraction f)
    {
        cout << "Subtraction = "
             << (n * f.d - f.n * d) << "/" << (d * f.d);
    }
};

int main()
{
    Fraction f1, f2;

    cout << "Enter first fraction: ";
    f1.input();

    cout << "Enter second fraction: ";
    f2.input();

    f1.addition(f2);
    f1.subtraction(f2);

    return 0;
}