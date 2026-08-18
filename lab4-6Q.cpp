#include <iostream>
using namespace std;

class Door {
private:
    int number;
    bool locked;

public:
    Door(int n, bool l) {
        number = n;
        locked = l;
    }

    friend class SecuritySystem;
};

class SecuritySystem {
public:
    void checkDoor(Door d) {
        cout << "Door Number: " << d.number << endl;

        if (d.locked)
            cout << "Status: Locked";
        else
            cout << "Status: Unlocked";
    }
};

int main() {
    Door d(101, true);

    SecuritySystem s;
    s.checkDoor(d);

    return 0;
}