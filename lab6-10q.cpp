#include <iostream>
using namespace std;

int main() {
    int n, searchID;

    cout << "Enter number of students in the university : ";
    cin >> n;

    int *ids = new int[n];

    cout << "Enter student IDs:\n";
    for (int i = 0; i < n; i++)
        cin >> *(ids + i);

    cout << "Enter ID to search: ";
    cin >> searchID;

    int *p = ids;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (*p == searchID) {
            cout << "ID found at position: " << i << endl;
            found = true;
            break;
        }
        p++;
    }

    if (!found)
        cout << "ID not found." << endl;

    delete[] ids;

    return 0;
}