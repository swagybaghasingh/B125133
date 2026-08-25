#include <iostream>
using namespace std;

int calc(int a, int b)
{
    return a + b;
}

int calc(int a, int b, int c)
{
    return a + b + c;
}

float calc(float a, float b)
{
    return a + b;
}

int main()
{
    cout << "Two integers: " << calc(10, 20) << endl;
    cout << "Three integers: " << calc(10, 20, 30) << endl;
    cout << "Two floats: " << calc(10.5f, 20.5f) << endl;

    return 0;
}