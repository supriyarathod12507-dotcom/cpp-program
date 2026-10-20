#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    // Default Constructor
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    // Parameterized Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Destructor
    ~Rectangle() {
        cout << "Rectangle object destroyed." << endl;
    }

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }

    void display() {
        cout << "Length    : " << length << endl;
        cout << "Width     : " << width << endl;
        cout << "Area      : " << calculateArea() << endl;
        cout << "Perimeter : " << calculatePerimeter() << endl;
    }
};

int main() {
    Rectangle r(4.0, 40.0);
    r.display();
    return 0;
}

// Length    : 4
// Width     : 40
// Area      : 160
// Perimeter : 88
// Rectangle object destroyed.