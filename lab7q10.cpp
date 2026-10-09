#include <iostream>
using namespace std;

class Employee
{
protected:
    int employeeID;
    string name;

public:
    Employee(int id, string n)
    {
        employeeID = id;
        name = n;
    }
};

class Developer : virtual public Employee
{
protected:
    string language;

public:
    Developer(int id, string n, string l)
        : Employee(id, n)
    {
        language = l;
    }
};

class Tester : virtual public Employee
{
protected:
    string tool;

public:
    Tester(int id, string n, string t)
        : Employee(id, n)
    {
        tool = t;
    }
};

class TechLead : public Developer, public Tester
{
public:
    TechLead(int id, string n, string l, string t)
        : Employee(id, n),
          Developer(id, n, l),
          Tester(id, n, t)
    {
    }

    void display()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Programming Language: " << language << endl;
        cout << "Testing Tool: " << tool << endl;
    }
};

int main()
{
    TechLead t(101, "Rudra", "C++", "Selenium");
    t.display();

    return 0;
}