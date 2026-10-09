#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of Shape" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area of Rectangle = " <<  length * breadth << endl;
    }
    int length = 10, breadth = 5;
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
    int r = 5;
};

class Square : public Shape {
public:
    void area() {
        cout << "Area of Square = " << side * side << endl;
    }
    int side = 4;
};

int main() {
    Shape *s;

    Rectangle r;
    Circle c;
    Square sq;

    s = &r;
    s->area();

    s = &c;
    s->area();

    s = &sq;
    s->area();

    return 0;
}