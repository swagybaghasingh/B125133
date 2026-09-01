#include <iostream>
using namespace std;

int main() {
    int seats[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int position, newSeat;

    cout << "The Seats shown before update in the movie hall: ";
    for (int i = 0; i < 8; i++)
        cout << seats[i] << " ";

    cout << "\nEnter position (0-7): ";
    cin >> position;

    cout << "Enter new seat number that is present in movie hall: ";
    cin >> newSeat;

    int *p = seats;
    *(p + position) = newSeat;

    cout << "\nThe Seats shown after update in the movie hall: ";
    for (int i = 0; i < 8; i++)
        cout << seats[i] << " ";

    return 0;
}