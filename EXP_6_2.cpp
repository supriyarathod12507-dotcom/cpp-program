#include <iostream>
using namespace std;

class Employee {
public:
    float calculateSalary(float basic) {
        return basic;
    }

    float calculateSalary(float basic, float hra) {
        return basic + hra;
    }

    float calculateSalary(float basic, float hra, float da) {
        return basic + hra + da;
    }
};

int main() {
    Employee e;
    cout << "Only Basic          : " << e.calculateSalary(30000) << endl;
    cout << "Basic + HRA         : " << e.calculateSalary(30000, 5000) << endl;
    cout << "Basic + HRA + DA    : " << e.calculateSalary(30000, 5000, 3000) << endl;
    return 0;
}

// Only Basic          : 30000
// Basic + HRA         : 35000
// Basic + HRA + DA    : 38000