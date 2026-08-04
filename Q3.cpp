#include <iostream>
using namespace std;

class Calculator
{
    float num1, num2;

public:
    void input()
    {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;
    }

    void addition()
    {
        cout << "Addition = " << num1 + num2 << endl;
    }

    void subtraction()
    {
        cout << "Subtraction = " << num1 - num2 << endl;
    }

    void multiplication()
    {
        cout << "Multiplication = " << num1 * num2 << endl;
    }

    void division()
    {
        if(num2 != 0)
            cout << "Division = " << num1 / num2 << endl;
        else
            cout << "Division by zero is not possible." << endl;
    }
};

int main()
{
    Calculator c;

    c.input();
    c.addition();
    c.subtraction();
    c.multiplication();
    c.division();

    return 0;
}