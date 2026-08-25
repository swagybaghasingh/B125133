#include <iostream>
using namespace std;

void modify(int &x, int v)
{
    x += v;
}

void modify(float &x, float v)
{
    x += v;
}

void modify(int *x, int v)
{
    *x += v;
}

int main()
{
    int a = 10;
    float b = 5.5;

    cout << "Before: " << a << endl;
    modify(a, 5);
    cout << "After: " << a << endl;

    cout << "Before: " << b << endl;
    modify(b, 2.5);
    cout << "After: " << b << endl;

    int c = 20;
    cout << "Before pointer modification: " << c << endl;
    modify(&c, 10);
    cout << "After pointer modification: " << c << endl;

    return 0;
}