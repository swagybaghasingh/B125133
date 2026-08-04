#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:
    void input()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    float area()
    {
        return length * breadth;
    }

    float perimeter()
    {
        return 2 * (length + breadth);
    }

    void display()
    {
        cout << "Area = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    }
};

int main()
{
    Rectangle r;

    r.input();
    r.display();

    return 0;
}

