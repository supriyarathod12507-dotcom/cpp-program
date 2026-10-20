#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("sample.txt");
    string line;
    int lines = 0, words = 0, chars = 0;

    while (getline(fin, line)) {
        lines++;
        chars += line.length();

        // Simple word count
        bool inWord = false;
        for (char c : line) {
            if (c != ' ' && c != '\t') {
                if (!inWord) {
                    words++;
                    inWord = true;
                }
            } else {
                inWord = false;
            }
        }
    }
    fin.close();

    cout << "Lines      : " << lines << endl;
    cout << "Words      : " << words << endl;
    cout << "Characters : " << chars << endl;
    return 0;
}

// Lines      : 2
// Words      : 5
// Characters : 28