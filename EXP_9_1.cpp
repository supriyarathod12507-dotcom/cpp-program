#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car started\n";
    }
    void stop() {
        cout << "Car stopped\n";
    }
};

class Bike : public Vehicle {
public:
    void start() {
        cout << "Bike started\n";
    }
    void stop() {
        cout << "Bike stopped\n";
    }
};

int main() {
    Vehicle *v;
    Car c;
    Bike b;

    v = &c;
    v->start();
    v->stop();

    v = &b;
    v->start();
    v->stop();
    return 0;
}

// Car started
// Car stopped
// Bike started
// Bike stopped