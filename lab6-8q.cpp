#include <iostream>
using namespace std;

void increaseScores(int *p, int n) {
    for (int i = 0; i < n; i++) {
        *p = *p + 10;
        p++;
    }
}

int main() {
    int n;

    cout << "Enter number of players in a football match: ";
    cin >> n;

    int scores[n];

    cout << "Enter scores in a football match:\n";
    for (int i = 0; i < n; i++)
        cin >> scores[i];

    cout << "Before update: ";
    for (int i = 0; i < n; i++)
        cout << scores[i] << " ";

    increaseScores(scores, n);

    cout << "\nAfter update: ";
    for (int i = 0; i < n; i++)
        cout << scores[i] << " ";

    return 0;
}