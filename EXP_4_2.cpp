#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int patientId, age;
    string name;
    float charges;

public:
    void registerPatient() {
        cout << "Enter Patient ID: ";
        cin >> patientId;
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Age: ";
        cin >> age;

        // Simple charge calculation
        if (age > 60)
            charges = 300;
        else
            charges = 500;
    }

    void display() {
        cout << "\nPatient ID : " << patientId << endl;
        cout << "Name       : " << name << endl;
        cout << "Age        : " << age << endl;
        cout << "Charges    : ₹" << charges << endl;
    }
};

int main() {
    Patient p;
    p.registerPatient();
    p.display();
    return 0;
}

// Enter Patient ID: 201
// Enter Name: Suresh
// Enter Age: 65

// Patient ID : 201
// Name       : Suresh
// Age        : 65
// Charges    : ₹300