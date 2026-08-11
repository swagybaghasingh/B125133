#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float basicSalary;
    int months;
    float *earnings;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Number of Months: ";
        cin >> months;

        earnings = new float[months];

        cout << "Enter monthly earnings:" << endl;

        for (int i = 0; i < months; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> earnings[i];
        }
    }

    void display()
    {
        float total = 0;
        float highest = earnings[0];
        int highestMonth = 1;

        for (int i = 0; i < months; i++)
        {
            total = total + earnings[i];

            if (earnings[i] > highest)
            {
                highest = earnings[i];
                highestMonth = i + 1;
            }
        }

        float average = total / months;

        cout << "\nEmployee Salary Analysis" << endl;

        cout << "Employee ID = " << id << endl;
        cout << "Employee Name = " << name << endl;
        cout << "Basic Salary = " << basicSalary << endl;

        cout << "Total Earnings = " << total << endl;
        cout << "Average Monthly Earning = " << average << endl;
        cout << "Highest Earning = " << highest << endl;
        cout << "Highest Earning Month = "
             << highestMonth << endl;
    }

    ~Employee()
    {
        delete[] earnings;
    }
};

int main()
{
    Employee e;

    e.input();
    e.display();

    return 0;
}