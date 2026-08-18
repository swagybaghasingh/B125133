#include <iostream>
using namespace std;

class ParkingSlot {
private:
    int slot;
    string vehicle;
    bool occupied;

public:
    ParkingSlot(int s, string v, bool o) {
        slot = s;
        vehicle = v;
        occupied = o;
    }

    friend void checkSlot(ParkingSlot p);
};

void checkSlot(ParkingSlot p) {
    cout << "Slot: " << p.slot << endl;

    if (p.occupied) {
        cout << "Status: Occupied" << endl;
        cout << "Vehicle: " << p.vehicle;
    }
    else {
        cout << "Status: Available";
    }
}

int main() {
    ParkingSlot p(5, "OD02AB1234", true);
    checkSlot(p);

    return 0;
}