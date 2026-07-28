#include <iostream>
using namespace std;

struct Rectangle
{
    float length;
    float breadth;
};

int main()
{
    Rectangle r;
    float area, perimeter;

    cout << "Enter Length: ";
    cin >> r.length;

    cout << "Enter Breadth: ";
    cin >> r.breadth;

    area = r.length * r.breadth;
    perimeter = 2 * (r.length + r.breadth);

    cout << "\nRectangle Details\n";
    cout << "Length: " << r.length << endl;
    cout << "Breadth: " << r.breadth << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
