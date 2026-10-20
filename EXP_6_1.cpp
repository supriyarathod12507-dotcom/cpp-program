#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Two integers   : " << calc.add(10, 20) << endl;
    cout << "Three integers : " << calc.add(10, 20, 30) << endl;
    cout << "Two floats     : " << calc.add(2.5f, 3.7f) << endl;
    return 0;
}

// Two integers   : 30
// Three integers : 60
// Two floats     : 6.2