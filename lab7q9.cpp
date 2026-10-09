#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    Person(string n)
    {
        name = n;
        cout << "Person constructor" << endl;
    }
};

class Employee : public Person
{
protected:
    int employeeID;

public:
    Employee(string n, int id)
        : Person(n)
    {
        employeeID = id;
        cout << "Employee constructor" << endl;
    }
};

class Manager : public Employee
{
    float salary;

public:
    Manager(string n, int id, float s)
        : Employee(n, id)
    {
        salary = s;
        cout << "Manager constructor" << endl;
    }

    void display()
    {
        cout << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Manager m("Rudra", 101, 50000);
    m.display();

    return 0;
}