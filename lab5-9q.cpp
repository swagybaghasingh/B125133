#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

int maximum(int *a, int *b)
{
    return (*a > *b) ? *a : *b;
}

int maximum(int *a, int n)
{
    int max = a[0];

    for(int i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];

    return max;
}

int main()
{
    int a = 10, b = 20;
    int arr[] = {5, 15, 8, 30, 12};

    cout << "Maximum of integers: "
         << maximum(a, b) << endl;

    cout << "Maximum using pointers: "
         << maximum(&a, &b) << endl;

    cout << "Maximum in array: "
         << maximum(arr, 5) << endl;

    return 0;
}