#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    int bookId;
    string title, author;
    bool isIssued;

public:
    LibraryBook() {
        isIssued = false;
    }

    void accept() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cout << "Enter Title: ";
        getline(cin >> ws, title);
        cout << "Enter Author: ";
        getline(cin, author);
    }

    void issue() {
        if (!isIssued) {
            isIssued = true;
            cout << "Book issued successfully.\n";
        } else {
            cout << "Book already issued!\n";
        }
    }

    void returnBook() {
        if (isIssued) {
            isIssued = false;
            cout << "Book returned successfully.\n";
        } else {
            cout << "Book was not issued!\n";
        }
    }

    void display() {
        cout << "\nBook ID : " << bookId << endl;
        cout << "Title   : " << title << endl;
        cout << "Author  : " << author << endl;
        cout << "Status  : " << (isIssued ? "Issued" : "Available") << endl;
    }
};

int main() {
    LibraryBook b;
    b.accept();
    b.display();
    b.issue();
    b.display();
    b.returnBook();
    b.display();
    return 0;
}

// Enter Book ID: 101
// Enter Title: Object Oriented Concepts
// Enter Author: Bjarne Stroustrup

// Book ID : 101
// Title   : Object Oriented Concepts
// Author  : Bjarne Stroustrup
// Status  : Available

// Book issued successfully.

// Book ID : 101
// Title   : Object Oriented Concepts
// Author  : Bjarne Stroustrup
// Status  : Issued

// Book returned successfully.

// Book ID : 101
// Title   : Object Oriented Concepts
// Author  : Bjarne Stroustrup
// Status  : Available