#include <iostream>
using namespace std;

class Fraction
{
    int num, den;

public:
    void getData()
    {
        cout << "Enter numerator: ";
        cin >> num;

        cout << "Enter denominator: ";
        cin >> den;
    }

    void add(Fraction f)
    {
        cout << "Addition = "
             << num * f.den + f.num * den
             << "/" << den * f.den << endl;
    }

    void subtract(Fraction f)
    {
        cout << "Subtraction = "
             << num * f.den - f.num * den
             << "/" << den * f.den << endl;
    }
};

int main()
{
    Fraction f1, f2;

    cout << "Enter first fraction:\n";
    f1.getData();

    cout << "Enter second fraction:\n";
    f2.getData();

    f1.add(f2);
    f1.subtract(f2);

    return 0;
}