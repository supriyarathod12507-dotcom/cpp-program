#include <iostream>
using namespace std;

int main() {
    int choice, a, b;

    do {
        cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1: cout << "Result = " << a + b << endl; break;
            case 2: cout << "Result = " << a - b << endl; break;
            case 3: cout << "Result = " << a * b << endl; break;
            case 4: 
                if (b != 0) cout << "Result = " << (float)a / b << endl;
                else cout << "Cannot divide by zero!\n";
                break;
            case 5: 
                if (b != 0) cout << "Result = " << a % b << endl;
                else cout << "Cannot find modulus by zero!\n";
                break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}


// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Modulus
// 6. Exit
// Enter your choice: 1
// Enter two numbers: 20 15
// Result = 35

// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Modulus
// 6. Exit
// Enter your choice: 6
// Exiting...