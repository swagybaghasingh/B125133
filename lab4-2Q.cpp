#include <iostream>
using namespace std;

class Mobile {
private:
    string brand, model;
    int battery;

public:
    Mobile(string b, string m, int p) {
        brand = b;
        model = m;
        battery = p;
    }

    friend void checkBattery(Mobile m);
};

void checkBattery(Mobile m) {
    cout << "Brand: " << m.brand << endl;
    cout << "Model: " << m.model << endl;
    cout << "Battery: " << m.battery << "%" << endl;

    if (m.battery < 20)
        cout << "Battery Low";
    else
        cout << "Battery Normal";
}

int main() {
    Mobile m("Samsung", "M31", 15);
    checkBattery(m);

    return 0;
}