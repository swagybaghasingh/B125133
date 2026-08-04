#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int employeeID;
    string employeeName;
    float basicSalary;
    float hra, da, grossSalary;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculate()
    {
        hra = basicSalary * 0.20;
        da = basicSalary * 0.10;

        grossSalary = basicSalary + hra + da;
    }

    void display()
    {
        cout << "\nEmployee Salary Details" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main()
{
    Employee e;

    e.input();
    e.calculate();
    e.display();

    return 0;
}