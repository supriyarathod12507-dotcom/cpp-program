#include <iostream>
using namespace std;

int area(int s) {               // Square
    return s * s;
}

int area(int l, int b) {        // Rectangle
    return l * b;
}

float area(float r) {           // Circle
    return 3.14 * r * r;
}

float area(float bs, float ht) { // Triangle
    return (bs * ht) / 2;
}

int main() {
    int s, l, b;
    float r, bs, ht;

    cout << "Enter side of square: ";
    cin >> s;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Enter base and height of triangle: ";
    cin >> bs >> ht;

    cout << "\nArea of Square    : " << area(s) << endl;
    cout << "Area of Rectangle : " << area(l, b) << endl;
    cout << "Area of Circle    : " << area(r) << endl;
    cout << "Area of Triangle  : " << area(bs, ht) << endl;
    return 0;
}
// Enter side of square: 3
// Enter length and breadth of rectangle: 2 4
// Enter radius of circle: 4
// Enter base and height of triangle: 1 4

// Area of Square    : 9
// Area of Rectangle : 8
// Area of Circle    : 50.24
// Area of Triangle  : 2
