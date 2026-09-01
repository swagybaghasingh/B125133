#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of parking slots in the parking monitor: ";
    cin >> n;

    int *slots = new int[n];

    cout << "Enter status (0 = Available, 1 = Occupied):\n";

    for (int i = 0; i < n; i++)
        cin >> *(slots + i);

    int available = 0, occupied = 0;

    int *p = slots;

    for (int i = 0; i < n; i++) {
        if (*p == 0)
            available++;
        else if (*p == 1)
            occupied++;

        p++;
    }

    cout << "Available slots: " << available << endl;
    cout << "Occupied slots: " << occupied << endl;

    delete[] slots;

    return 0;
}