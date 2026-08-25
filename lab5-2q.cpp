#include <iostream>
using namespace std;

int larger(int a, int b)
{
    return (a > b) ? a : b;
}

float larger(float a, float b)
{
    return (a > b) ? a : b;
}

int larger(int a, int b, int c)
{
    return (a > b && a > c) ? a : (b > c ? b : c);
}

int main()
{
    cout << "Larger of 10 and 20: " << larger(10, 20) << endl;
    cout << "Larger of 4.5 and 7.2: " << larger(4.5f, 7.2f) << endl;
    cout << "Larger of 10, 50 and 30: " << larger(10, 50, 30) << endl;

    return 0;
}