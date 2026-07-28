#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    int age;
    float cgpa;
};

int main() {
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.roll;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Age: ";
    cin >> s.age;

    cout << "Enter CGPA: ";
    cin >> s.cgpa;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "CGPA: " << s.cgpa << endl;

    return 0;
}
