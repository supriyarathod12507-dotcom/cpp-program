#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    void accept() {
        cout << "Enter hours minutes seconds: ";
        cin >> hours >> minutes >> seconds;
    }

    Time add(Time t) {
        Time res;
        res.seconds = seconds + t.seconds;
        res.minutes = minutes + t.minutes + res.seconds / 60;
        res.seconds %= 60;
        res.hours = hours + t.hours + res.minutes / 60;
        res.minutes %= 60;
        res.hours %= 24;
        return res;
    }

    void display() {
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    }
};

int main() {
    Time t1, t2, result;
    cout << "First Time:\n";
    t1.accept();
    cout << "Second Time:\n";
    t2.accept();

    result = t1.add(t2);
    cout << "Resultant Time: ";
    result.display();
    return 0;
}

// First Time:
// Enter hours minutes seconds: 10 45 50
// Second Time:
// Enter hours minutes seconds: 2 20 30
// Resultant Time: 13:06:20