#include <iostream>
using namespace std;

int main() {
    float length = 10, width = 5;
    float area, perimeter;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "Length = " << length << endl;
    cout << "Width = " << width << endl;
    cout << "Area of Rectangle = " << area << endl;
    cout << "Perimeter of Rectangle = " << perimeter << endl;

    return 0;
}