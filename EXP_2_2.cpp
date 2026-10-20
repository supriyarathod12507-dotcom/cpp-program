#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productId, quantity;
    string productName;
    float unitPrice;

public:
    void accept() {
        cout << "Enter Product ID: ";
        cin >> productId;
        cout << "Enter Product Name: ";
        getline(cin >> ws, productName);
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Unit Price: ";
        cin >> unitPrice;
    }

    void display() {
        cout << "\nProduct ID   : " << productId << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Quantity     : " << quantity << endl;
        cout << "Unit Price   : " << unitPrice << endl;
        cout << "Total Cost   : " << quantity * unitPrice << endl;
    }
};

int main() {
    Product p;
    p.accept();
    p.display();
    return 0;
}

// Enter Product ID: 501
// Enter Product Name: Laptop
// Enter Quantity: 3
// Enter Unit Price: 45000

// Product ID   : 501
// Product Name : Laptop
// Quantity     : 3
// Unit Price   : 45000
// Total Cost   : 135000