#include <iostream>
#include <exception>
using namespace std;

// Division by zero
double division(int a, int b) {
    if (b == 0)
        throw "Division by zero condition!";
    return (double)a / b;
}

// Custom Exception
class InvalidAgeException : public exception {
public:
    const char* what() const noexcept {
        return "Invalid Age! Age must be between 1 and 120.";
    }
};

class Person {
    string name;
    int age;
public:
    void setAge(int a) {
        if (a < 1 || a > 120)
            throw InvalidAgeException();
        age = a;
    }
};

int main() {
    // Division by zero demo
    try {
        cout << division(50, 0) << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    // Custom exception demo
    Person p;
    try {
        p.setAge(150);
    }
    catch (InvalidAgeException& e) {
        cout << e.what() << endl;
    }
    return 0;
}

// Division by zero condition!
// Invalid Age! Age must be between 1 and 120.