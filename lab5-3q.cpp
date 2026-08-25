#include <iostream>
using namespace std;

int total(int a[], int n)
{
    int s = 0;
    for(int i = 0; i < n; i++)
        s += a[i];
    return s;
}

float total(float a[], int n)
{
    float s = 0;
    for(int i = 0; i < n; i++)
        s += a[i];
    return s;
}

int total(int a[], int n, int x)
{
    int s = 0;
    for(int i = 0; i < x; i++)
        s += a[i];
    return s;
}

int main()
{
    int a[] = {10, 20, 30, 40};
    float b[] = {1.5, 2.5, 3.5};

    cout << "Integer array total: " << total(a, 4) << endl;
    cout << "Float array total: " << total(b, 3) << endl;
    cout << "First 3 integer elements: " << total(a, 4, 3) << endl;

    return 0;
}