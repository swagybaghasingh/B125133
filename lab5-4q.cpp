#include <iostream>
using namespace std;

int search(int a[], int n, int x)
{
    for(int i = 0; i < n; i++)
        if(a[i] == x)
            return i;
    return -1;
}

int search(char a[], int n, char x)
{
    for(int i = 0; i < n; i++)
        if(a[i] == x)
            return i;
    return -1;
}

int search(int a[], int l, int r, int x)
{
    for(int i = l; i <= r; i++)
        if(a[i] == x)
            return i;
    return -1;
}

int main()
{
    int a[] = {10, 20, 30, 40};
    char c[] = {'a', 'b', 'c', 'd'};

    cout << "20 found at position: " << search(a, 4, 20) << endl;
    cout << "c found at position: " << search(c, 4, 'c') << endl;
    cout << "40 found at position: " << search(a, 2, 3, 40) << endl;

    return 0;
}