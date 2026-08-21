#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    void accept()
    {
        cin >> h >> m >> s;
    }

    void add(Time t1, Time t2)
    {
        s = t1.s + t2.s;
        m = t1.m + t2.m;
        h = t1.h + t2.h;

        if (s >= 60)
        {
            s = s - 60;
            m++;
        }

        if (m >= 60)
        {
            m = m - 60;
            h++;
        }
    }

    void display()
    {
        cout << h << ":" << m << ":" << s;
    }
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time: ";
    t1.accept();

    cout << "Enter second time: ";
    t2.accept();

    t3.add(t1, t2);

    cout << "Resultant Time: ";
    t3.display();

    return 0;
}