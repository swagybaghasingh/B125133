#include <iostream>
using namespace std;

int count(int n)
{
    int c = 0;
    do
    {
        c++;
        n /= 10;
    } while(n != 0);

    return c;
}

int count(int a[], int n)
{
    return n;
}

int count(char a[], int n, char x)
{
    int c = 0;

    for(int i = 0; i < n; i++)
        if(a[i] == x)
            c++;

    return c;
}

int main()
{
    int a[] = {10, 20, 30, 40};
    char c[] = {'a', 'b', 'a', 'c', 'a'};

    cout << "Digits: " << count(12345) << endl;
    cout << "Array elements: " << count(a, 4) << endl;
    cout << "Occurrences of a: " << count(c, 5, 'a') << endl;

    return 0;
}