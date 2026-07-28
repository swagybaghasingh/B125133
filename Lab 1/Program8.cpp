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
    Employee emp[5];
    int maxIndex = 0;

    cout << "Enter details of 5 employees:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> emp[i].empId;

        cin.ignore();

        cout << "Name: ";
        getline(cin, emp[i].name);

        cout << "Salary: ";
        cin >> emp[i].salary;

        if (emp[i].salary > emp[maxIndex].salary)
            maxIndex = i;
    }

    cout << "\nEmployee with Highest Salary:\n";
    cout << "Employee ID: " << emp[maxIndex].empId << endl;
    cout << "Name: " << emp[maxIndex].name << endl;
    cout << "Salary: " << emp[maxIndex].salary << endl;

    return 0;
}
