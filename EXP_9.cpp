#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;   // Pure virtual
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    float area() {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    float area() {
        return length * width;
    }
};

int main() {
    Shape *s;
    Circle c(7);
    Rectangle r(4, 8);

    s = &c;
    cout << "Area of Circle    : " << s->area() << endl;

    s = &r;
    cout << "Area of Rectangle : " << s->area() << endl;
    return 0;
}

// Area of Circle    : 153.86
// Area of Rectangle : 32