#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
    float cMarks, mMarks, pMarks;
};

int main()
{
    Student s;
    float total, average;

    cout << "Enter Roll Number: ";
    cin >> s.roll;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Marks in C: ";
    cin >> s.cMarks;

    cout << "Enter Marks in Mathematics: ";
    cin >> s.mMarks;

    cout << "Enter Marks in Physics: ";
    cin >> s.pMarks;

    total = s.cMarks + s.mMarks + s.pMarks;
    average = total / 3;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}
