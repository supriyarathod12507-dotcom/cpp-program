#include <iostream>
using namespace std;

class Complex
{
private:
    int r1, i1, r2, i2;

public:
    void input()
    {
        cout << "Enter first complex number: ";
        cin >> r1 >> i1;

        cout << "Enter second complex number: ";
        cin >> r2 >> i2;
    }

    void add()
    {
        cout << "Addition = "
             << r1 + r2 << " + "
             << i1 + i2 << "i" << endl;
    }

    void sub()
    {
        cout << "Subtraction = "
             << r1 - r2 << " + "
             << i1 - i2 << "i" << endl;
    }
};

int main()
{
    Complex c;

    c.input();
    c.add();
    c.sub();
    return 0;
}  
