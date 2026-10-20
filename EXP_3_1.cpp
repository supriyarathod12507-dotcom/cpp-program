#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den;

    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    void simplify() {
        int g = gcd(abs(num), abs(den));
        num /= g;
        den /= g;
        if (den < 0) {
            num = -num;
            den = -den;
        }
    }

public:
    void accept() {
        cout << "Enter numerator: ";
        cin >> num;
        cout << "Enter denominator: ";
        cin >> den;
        simplify();
    }

    Fraction add(Fraction f) {
        Fraction res;
        res.num = num * f.den + f.num * den;
        res.den = den * f.den;
        res.simplify();
        return res;
    }

    Fraction subtract(Fraction f) {
        Fraction res;
        res.num = num * f.den - f.num * den;
        res.den = den * f.den;
        res.simplify();
        return res;
    }

    void display() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1, f2, sum, diff;
    cout << "First Fraction:\n";
    f1.accept();
    cout << "Second Fraction:\n";
    f2.accept();

    sum = f1.add(f2);
    diff = f1.subtract(f2);

    cout << "Sum       : ";
    sum.display();
    cout << "Difference: ";
    diff.display();
    return 0;
}

// First Fraction:
// Enter numerator: 1
// Enter denominator: 2
// Second Fraction:
// Enter numerator: 3
// Enter denominator: 4
// Sum       : 5/4
// Difference: -1/4