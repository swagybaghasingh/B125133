#include <iostream>
using namespace std;

int main() {
    int books[9] = {77,78,79,80,81,82,83,84,85};

    int *p = books;

    cout << "Book IDs and Addresses:\n";

    for (int i = 0; i < 9; i++) {
        cout << "Book ID: " << *p;
        cout << "  Address: " << p << endl;
        p++;
    }

    return 0;
}