#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int empId;
    string name;
    float salary;
};

int main()
{
    Employee emp[3];

    cout << "Enter details of 3 employees:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> emp[i].empId;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, emp[i].name);

        cout << "Enter Salary: ";
        cin >> emp[i].salary;
    }

    cout << "\nEmployee Records:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID: " << emp[i].empId << endl;
        cout << "Name: " << emp[i].name << endl;
        cout << "Salary: " << emp[i].salary << endl;
    }

    return 0;
}
