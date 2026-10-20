#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    Distance(int f, int i) {
        feet = f;
        inch = i;
    }

    void operator-() {
        feet--;
        inch--;
        cout << "Feet & Inches (Decrement): " << feet << "'" << inch << endl;
    }
};

int main() {
    Distance d1(8, 9);
    -d1;
    return 0;
}

// Unary Operator Output:

// Feet & Inches (Decrement): 7'8