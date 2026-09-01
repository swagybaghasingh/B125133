#include <iostream>
using namespace std;

int main() {
    float balance, add, deduct;

    cout << "Enter current available balance: ";
    cin >> balance;

    float *p = &balance;

    cout << "Current available balance: " << *p << endl;

    cout << "Enter the exact amount to add: ";
    cin >> add;
    *p += add;

    cout << "Enter the exact amount to deduct: ";
    cin >> deduct;
    *p -= deduct;

    cout << "Final remaining balance: " << *p << endl;

    return 0;
}