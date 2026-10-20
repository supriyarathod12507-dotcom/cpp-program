#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    float basic, hra, da;

public:
    Employee(int id, string n, float b, float h, float d) {
        empId = id;
        name = n;
        basic = b;
        hra = h;
        da = d;
    }

    ~Employee() {
        cout << "Employee object destroyed for " << name << endl;
    }

    float grossSalary() {
        return basic + hra + da;
    }

    void display() {
        cout << "Employee ID : " << empId << endl;
        cout << "Name        : " << name << endl;
        cout << "Gross Salary: ₹" << grossSalary() << endl;
    }
};

int main() {
    Employee e(101, "Rahul", 30000, 5000, 3000);
    e.display();
    return 0;
}

// Employee ID : 101
// Name        : Rahul
// Gross Salary: ₹38000
// Employee object destroyed for Rahul