#include <iostream>
using namespace std;

void highestPrice(float *p, int n) {
    float max = *p;

    for (int i = 1; i < n; i++) {
        p++;

        if (*p > max)
            max = *p;
    }

    cout << "Highest price: " << max << endl;
}

int main() {
    float prices[7];

    cout << "Enter prices of 7 products in the grocery price scanner :\n";

    for (int i = 0; i < 7; i++)
        cin >> prices[i];

    highestPrice(prices, 7);

    return 0;
}