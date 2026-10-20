#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    void inputDetails() {
        cout << "Enter Student Name: ";
        getline(cin >> ws, name);
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "\n----- Student Details -----\n";
        cout << "Name    : " << name << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Marks   : " << marks << endl;
    }
};

int main() {
    Student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}

// Enter Student Name: Supriya 
// Enter Roll Number: 132
// Enter Marks: 75

// ----- Student Details -----
// Name    : Supriya 
// Roll No.: 132
// Marks   : 75