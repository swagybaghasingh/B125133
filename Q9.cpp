#include <iostream>
#include <string>
using namespace std;

class StudentResult
{
    string name;
    int rollNumber;
    float marks[5];
    float total, percentage;
    char grade;

public:
    void input()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter marks in 5 subjects:" << endl;

        for(int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void calculate()
    {
        total = 0;

        for(int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        percentage = (total / 500) * 100;

        if(percentage >= 90)
            grade = 'A';

        else if(percentage >= 80)
            grade = 'B';

        else if(percentage >= 70)
            grade = 'C';

        else if(percentage >= 60)
            grade = 'D';

        else
            grade = 'F';
    }

    void display()
    {
        cout << "\nStudent Result" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Total Marks: " << total << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    StudentResult s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}