#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int accountNo;
    float balance;

public:
    BankAccount(int a, float b)
    {
        accountNo = a;
        balance = b;
    }
};

class SavingsAccount : public BankAccount
{
    float interest;

public:
    SavingsAccount(int a, float b, float i)
        : BankAccount(a, b)
    {
        interest = i;
    }

    void display()
    {
        balance = balance + interest;

        cout << "Savings Account" << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount
{
    float minimumBalance;
    float maintenanceCharge;

public:
    CurrentAccount(int a, float b, float min, float charge)
        : BankAccount(a, b)
    {
        minimumBalance = min;
        maintenanceCharge = charge;
    }

    void display()
    {
        if (balance < minimumBalance)
            balance = balance - maintenanceCharge;

        cout << "Current Account" << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main()
{
    SavingsAccount s(101, 10000, 500);
    CurrentAccount c(102, 4000, 5000, 200);

    s.display();
    cout << endl;
    c.display();

    return 0;
}