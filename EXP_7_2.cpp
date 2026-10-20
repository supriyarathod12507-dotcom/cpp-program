#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empId;
    string name, department;

public:
    void getEmp() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Department: ";
        getline(cin, department);
    }

    void putEmp() {
        cout << "ID         : " << empId << endl;
        cout << "Name       : " << name << endl;
        cout << "Department : " << department << endl;
    }
};

class TeachingStaff : public Employee {
    string subject, qualification;

public:
    void get() {
        getEmp();
        cout << "Enter Subject: ";
        getline(cin, subject);
        cout << "Enter Qualification: ";
        getline(cin, qualification);
    }

    void put() {
        putEmp();
        cout << "Subject       : " << subject << endl;
        cout << "Qualification : " << qualification << endl;
    }
};

class NonTeachingStaff : public Employee {
    string designation;
    int workingHours;

public:
    void get() {
        getEmp();
        cout << "Enter Designation: ";
        getline(cin, designation);
        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void put() {
        putEmp();
        cout << "Designation   : " << designation << endl;
        cout << "Working Hours : " << workingHours << endl;
    }
};

int main() {
    TeachingStaff t;
    NonTeachingStaff n;

    cout << "--- Teaching Staff ---\n";
    t.get();
    t.put();

    cout << "\n--- Non Teaching Staff ---\n";
    n.get();
    n.put();
    return 0;
}

// --- Teaching Staff ---
// Enter Employee ID: 101
// Enter Name: Dr. Sharma
// Enter Department: CSE
// Enter Subject: OOPS
// Enter Qualification: PhD

// ID         : 101
// Name       : Dr. Sharma
// Department : CSE
// Subject       : OOPS
// Qualification : PhD

// --- Non Teaching Staff ---
// Enter Employee ID: 201
// Enter Name: Ramesh
// Enter Department: Admin
// Enter Designation: Clerk
// Enter Working Hours: 8

// ID         : 201
// Name       : Ramesh
// Department : Admin
// Designation   : Clerk
// Working Hours : 8