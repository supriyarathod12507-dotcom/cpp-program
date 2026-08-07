#include<iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    char name[50];
    float percentage;

    void accept()
    {
        cout<<"Enter Roll Number: ";
        cin>>rollNo;

        cout<<"Enter Student Name: ";
        cin>>name;

        cout<<"Enter Percentage: ";
        cin>>percentage;
    }

    void display()
    {
        cout<<"\nStudent Information";
        cout<<"\nRoll Number : "<<rollNo;
        cout<<"\nName : "<<name;
        cout<<"\nPercentage : "<<percentage<<"%";
    }
};

int main()
{
    Student s;
    s.accept();
    s.display();

    return 0;
}