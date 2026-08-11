#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float salary;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "ID = " << id
             << ", Name = " << name
             << ", Salary = " << salary << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee *emp;

    emp = new Employee[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        emp[i].input();
    }

    cout << "\nEmployee Details" << endl;

    for (int i = 0; i < n; i++)
    {
        emp[i].display();
    }

    delete[] emp;

    return 0;
}