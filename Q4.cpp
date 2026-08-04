#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    int accountNumber;
    string accountHolderName;
    float balance;

public:
    void input()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Account Holder Name: ";
        cin >> accountHolderName;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount deposited successfully." << endl;
    }

    void withdraw()
    {
        float amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if(amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal successful." << endl;
        }
        else
        {
            cout << "Insufficient Balance." << endl;
        }
    }

    void display()
    {
        cout << "\nAccount Details" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.input();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}