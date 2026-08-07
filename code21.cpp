#include <iostream>
using namespace std;

class Employee
{
public:
    int empID;
    string name;
    float salary;

    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee Details\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;
    e.accept();
    e.display();

    return 0;
}