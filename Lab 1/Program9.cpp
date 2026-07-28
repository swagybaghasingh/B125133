#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
    float cgpa;
};

int main()
{
    Student s[5];

    cout << "Enter details of 5 students:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> s[i].roll;

        cin.ignore();

        cout << "Name: ";
        getline(cin, s[i].name);

        cout << "CGPA: ";
        cin >> s[i].cgpa;
    }

    cout << "\nStudents with CGPA >= 8.0\n";

    for (int i = 0; i < 5; i++)
    {
        if (s[i].cgpa >= 8.0)
        {
            cout << "\nRoll Number: " << s[i].roll << endl;
            cout << "Name: " << s[i].name << endl;
            cout << "CGPA: " << s[i].cgpa << endl;
        }
    }

    return 0;
}
