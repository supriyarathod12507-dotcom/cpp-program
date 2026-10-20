#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    Distance(int f = 0, int i = 0) {
        feet = f;
        inch = i;
    }

    Distance operator+(Distance d2) {
        Distance temp;
        temp.feet = feet + d2.feet;
        temp.inch = inch + d2.inch;
        if (temp.inch >= 12) {
            temp.feet += temp.inch / 12;
            temp.inch %= 12;
        }
        return temp;
    }
};

int main() {
    Distance d1(8, 9), d2(10, 2);
    Distance d3 = d1 + d2;
    cout << "Total Feet & Inches: " << d3.feet << "'" << d3.inch << endl;
    return 0;
}


// Binary Operator Output:

// Total Feet & Inches: 18'11