#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    string name, department;
    float basicSalary;

public:
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void display() {
        cout << "\nEmployee ID   : " << empId << endl;
        cout << "Name          : " << name << endl;
        cout << "Department    : " << department << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "Annual Salary : " << basicSalary * 12 << endl;
    }
};

int main() {
    Employee e;
    e.accept();
    e.display();
    return 0;
}

// Enter Employee ID: 101
// Enter Name: Supriya
// Enter Department: CSE
// Enter Basic Salary: 35000

// Employee ID   : 101
// Name          : Supriya
// Department    : CSE
// Basic Salary  : 35000
// Annual Salary : 420000