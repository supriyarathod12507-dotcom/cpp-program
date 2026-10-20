#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];

public:
    void input() {
        cout << "Enter 2x2 matrix elements:\n";
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> a[i][j];
    }

    Matrix operator+(Matrix m) {
        Matrix res;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                res.a[i][j] = a[i][j] + m.a[i][j];
        return res;
    }

    Matrix operator-(Matrix m) {
        Matrix res;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                res.a[i][j] = a[i][j] - m.a[i][j];
        return res;
    }

    bool operator==(Matrix m) {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                if (a[i][j] != m.a[i][j])
                    return false;
        return true;
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2, sum, diff;
    cout << "Matrix 1:\n";
    m1.input();
    cout << "Matrix 2:\n";
    m2.input();

    sum = m1 + m2;
    diff = m1 - m2;

    cout << "\nSum:\n";
    sum.display();
    cout << "Difference:\n";
    diff.display();

    if (m1 == m2)
        cout << "Matrices are Equal\n";
    else
        cout << "Matrices are Not Equal\n";
    return 0;
}

// Matrix 1:
// Enter 2x2 matrix elements:
// 1 2
// 3 4
// Matrix 2:
// Enter 2x2 matrix elements:
// 5 6
// 7 8

// Sum:
// 6 8
// 10 12
// Difference:
// -4 -4
// -4 -4
// Matrices are Not Equal