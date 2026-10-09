#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;

public:
    Student(string n, int r)
    {
        name = n;
        rollNo = r;
    }

    virtual void calculateResult()
    {
        cout << "Student Result" << endl;
    }
};

class RegularStudent : public Student
{
    int marks;

public:
    RegularStudent(string n, int r, int m)
        : Student(n, r)
    {
        marks = m;
    }

    void calculateResult()
    {
        cout << "Regular Student" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Final Marks: " << marks << endl;
    }
};

class ScholarshipStudent : public Student
{
    int marks;

public:
    ScholarshipStudent(string n, int r, int m)
        : Student(n, r)
    {
        marks = m;
    }

    void calculateResult()
    {
        cout << "Scholarship Student" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Final Marks: " << marks + 5 << endl;
    }
};

int main()
{
    RegularStudent r("Rudra", 101, 80);
    ScholarshipStudent s("Aman", 102, 80);

    r.calculateResult();
    cout << endl;

    s.calculateResult();

    return 0;
}