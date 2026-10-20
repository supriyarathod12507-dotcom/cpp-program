#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout("records.txt", ios::app);  // append mode
    string name;
    int age;

    cout << "Enter name and age (type 'end' to stop):\n";
    while (true) {
        cout << "Name: ";
        getline(cin, name);
        if (name == "end")
            break;
        cout << "Age : ";
        cin >> age;
        cin.ignore();
        fout << name << " " << age << endl;
    }
    fout.close();

    ifstream fin("records.txt");
    cout << "\n--- All Records ---\n";
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();
    return 0;
}

// Enter name and age (type 'end' to stop):
// Name: Amit
// Age : 20
// Name: Priya
// Age : 21
// Name: end

// --- All Records ---
// Amit 20
// Priya 21