#include <iostream>
#include <string>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    int roll;
    string name;
    Date dob;
};

int main()
{
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.roll;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Date of Birth (Day Month Year): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Date of Birth: "
         << s.dob.day << "/"
         << s.dob.month << "/"
         << s.dob.year << endl;

    return 0;
}
