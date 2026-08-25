#include <iostream>
using namespace std;

int process(int a, int b)
{
    return a + b;
}

float process(int a, float b)
{
    return a + b;
}

float process(float a, float b)
{
    return a + b;
}

int process(int a[], int n)
{
    int s = 0;

    for(int i = 0; i < n; i++)
        s += a[i];

    return s;
}

int process(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a[] = {10, 20, 30};
    int x = 10, y = 20;

    cout << "Two integers: "
         << process(10, 20) << endl;

    cout << "Integer and float: "
         << process(10, 2.5f) << endl;

    cout << "Two floats: "
         << process(2.5f, 3.5f) << endl;

    cout << "Integer array: "
         << process(a, 3) << endl;

    cout << "Two pointers: "
         << process(&x, &y) << endl;

    return 0;
}