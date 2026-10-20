#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;

public:
    // Default Constructor
    Box() {
        length = width = height = 1;
    }

    // Parameterized Constructor
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Copy Constructor
    Box(const Box &b) {
        length = b.length;
        width = b.width;
        height = b.height;
    }

    ~Box() {
        cout << "Box object destroyed." << endl;
    }

    double volume() {
        return length * width * height;
    }

    void display() {
        cout << "Dimensions: " << length << " x " << width << " x " << height << endl;
        cout << "Volume    : " << volume() << endl;
    }
};

int main() {
    Box b1;                  // Default
    Box b2(2, 3, 4);         // Parameterized
    Box b3 = b2;             // Copy

    cout << "Box 1:\n"; b1.display();
    cout << "Box 2:\n"; b2.display();
    cout << "Box 3 (Copy):\n"; b3.display();
    return 0;
}

// Box 1:
// Dimensions: 1 x 1 x 1
// Volume    : 1
// Box 2:
// Dimensions: 2 x 3 x 4
// Volume    : 24
// Box 3 (Copy):
// Dimensions: 2 x 3 x 4
// Volume    : 24
// Box object destroyed.
// Box object destroyed.
// Box object destroyed.