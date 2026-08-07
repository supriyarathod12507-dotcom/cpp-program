#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "******** MENU ********" << endl;
    cout << "1. Sum of Natural Numbers" << endl;
    cout << "2. Reverse a Number" << endl;
    cout << "3. Check Palindrome" << endl;
    cout << "4. Check Armstrong Number" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            int n, sum = 0;
            cout << "Enter n: ";
            cin >> n;

            for(int i = 1; i <= n; i++)
                sum = sum + i;

            cout << "Sum = " << sum;
            break;
        }

        case 2:
        {
            int num, rem, rev = 0;
            cout << "Enter a number: ";
            cin >> num;

            while(num != 0)
            {
                rem = num % 10;
                rev = rev * 10 + rem;
                num = num / 10;
            }

            cout << "Reverse = " << rev;
            break;
        }

        case 3:
        {
            int num, temp, rem, rev = 0;
            cout << "Enter a number: ";
            cin >> num;

            temp = num;

            while(num != 0)
            {
                rem = num % 10;
                rev = rev * 10 + rem;
                num = num / 10;
            }

            if(temp == rev)
                cout << "Palindrome Number";
            else
                cout << "Not a Palindrome Number";

            break;
        }

        case 4:
        {
            int num, temp, rem, sum = 0;
            cout << "Enter a 3-digit number: ";
            cin >> num;

            temp = num;

            while(num != 0)
            {
                rem = num % 10;
                sum = sum + (rem * rem * rem);
                num = num / 10;
            }

            if(temp == sum)
                cout << "Armstrong Number";
            else
                cout << "Not an Armstrong Number";

            break;
        }

        case 5:
            cout << "Program Exited";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}