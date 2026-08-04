#include <iostream>
#include <string>
using namespace std;

class Student
{
    int rollNumber;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}