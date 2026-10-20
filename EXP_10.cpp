#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout("sample.txt");
    string line;

    cout << "Enter lines (type -1 to stop):\n";
    while (true) {
        getline(cin, line);
        if (line == "-1")
            break;
        fout << line << endl;
    }
    fout.close();

    ifstream fin("sample.txt");
    cout << "\n--- Content of file ---\n";
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();
    return 0;
}

// Enter lines (type -1 to stop):
// Hello World
// This is OOC Lab
// -1

// --- Content of file ---
// Hello World
// This is OOC Lab