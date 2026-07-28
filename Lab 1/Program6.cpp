#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    int inches;
};

int main()
{
    Distance d1, d2, total;

    cout << "Enter first distance:\n";
    cout << "Feet: ";
    cin >> d1.feet;
    cout << "Inches: ";
    cin >> d1.inches;

    cout << "\nEnter second distance:\n";
    cout << "Feet: ";
    cin >> d2.feet;
    cout << "Inches: ";
    cin >> d2.inches;

    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;

    // As per the question, ignore conversion if inches exceed 12

    cout << "\nTotal Distance:\n";
    cout << "Feet = " << total.feet << endl;
    cout << "Inches = " << total.inches << endl;

    return 0;
}
