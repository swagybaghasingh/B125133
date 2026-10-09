#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    float basicSalary;

public:
    Employee(string n, float b)
    {
        name = n;
        basicSalary = b;
    }
};

class Developer : public Employee
{
protected:
    int experience;

public:
    Developer(string n, float b, int e) : Employee(n, b)
    {
        experience = e;
    }
};

class SeniorDeveloper : public Developer
{
    float projectBonus;

public:
    SeniorDeveloper(string n, float b, int e, float p)
        : Developer(n, b, e)
    {
        projectBonus = p;
    }

    void display()
    {
        float experienceBonus = 0.05 * basicSalary * experience;
        float finalSalary = basicSalary + experienceBonus + projectBonus;

        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Experience Bonus: " << experienceBonus << endl;
        cout << "Project Bonus: " << projectBonus << endl;
        cout << "Final Salary: " << finalSalary << endl;
    }
};

int main()
{
    SeniorDeveloper s("Swastik", 50000, 3, 10000);
    s.display();

    return 0;
}