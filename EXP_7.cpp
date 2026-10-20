#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int roll;
    string name;

public:
    void getdata() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        getline(cin >> ws, name);
    }

    void putdata() {
        cout << "\nRoll No : " << roll << endl;
        cout << "Name    : " << name << endl;
    }
};

class StudentExam : public Student {
protected:
    int sub1, sub2, sub3, sub4, sub5, sub6;

public:
    void accept_data() {
        getdata();
        cout << "Enter marks of 6 subjects: ";
        cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5 >> sub6;
    }

    void display_data() {
        putdata();
        cout << "Marks: " << sub1 << " " << sub2 << " " << sub3
             << " " << sub4 << " " << sub5 << " " << sub6 << endl;
    }
};

class StudentResult : public StudentExam {
public:
    void calculate() {
        float per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6.0;
        cout << "Percentage: " << per << "%" << endl;
    }
};

int main() {
    StudentResult s;
    s.accept_data();
    s.display_data();
    s.calculate();
    return 0;
}

// Enter Roll No: 1001
// Enter Name: Amol
// Enter marks of 6 subjects: 80 75 90 85 70 88

// Roll No : 1001
// Name    : Amol
// Marks: 80 75 90 85 70 88
// Percentage: 81.3333%