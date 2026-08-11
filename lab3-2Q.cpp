#include <iostream>
using namespace std;

int main()
{
    int n;
    int *arr;

    cout << "Enter number of elements: ";
    cin >> n;

    arr = new int[n];

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}