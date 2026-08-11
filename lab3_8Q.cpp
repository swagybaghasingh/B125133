#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int subjects;
    float *marks;

public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Number of Subjects: ";
        cin >> subjects;

        marks = new float[subjects];

        cout << "Enter marks:" << endl;

        for (int i = 0; i < subjects; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void display()
    {
        float total = 0;

        for (int i = 0; i < subjects; i++)
        {
            total = total + marks[i];
        }

        float average = total / subjects;

        cout << "\nStudent Result" << endl;
        cout << "Roll Number = " << roll << endl;
        cout << "Name = " << name << endl;
        cout << "Total Marks = " << total << endl;
        cout << "Average = " << average << endl;
    }

    ~Student()
    {
        delete[] marks;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}