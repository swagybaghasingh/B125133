#include <iostream>
using namespace std;

int main() {
    int parcels, add;
    
    cout << "Enter the required parcels that is delivered: ";
    cin >> parcels;

    int *p = &parcels;

    cout << "Required Current parcels: " << *p << endl;

    cout << "Enter additional parcels that not to be packed: ";
    cin >> add;

    *p = *p + add;

    cout << "Updated parcels that should be displayed: " << *p << endl;

    return 0;
}