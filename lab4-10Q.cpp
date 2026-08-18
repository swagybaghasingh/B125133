#include <iostream>
using namespace std;

class SmartDevice {
private:
    string name, type;
    bool power;

public:
    SmartDevice(string n, string t) {
        name = n;
        type = t;
        power = false;
    }

    friend class HomeController;
};

class HomeController {
public:
    void display(SmartDevice d) {
        cout << "Device: " << d.name << endl;
        cout << "Type: " << d.type << endl;
        cout << "Power: " << (d.power ? "ON" : "OFF") << endl;
    }

    void turnOn(SmartDevice &d) {
        d.power = true;
    }

    void turnOff(SmartDevice &d) {
        d.power = false;
    }
};

int main() {
    SmartDevice d("Light", "LED");

    HomeController h;

    h.display(d);

    h.turnOn(d);
    cout << "\nAfter turning ON:\n";
    h.display(d);

    h.turnOff(d);
    cout << "\nAfter turning OFF:\n";
    h.display(d);

    return 0;
}