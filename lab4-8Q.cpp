#include <iostream>
using namespace std;

class TrainSeat {
private:
    int seat;
    string passenger;
    bool booked;

public:
    TrainSeat(int s, string p, bool b) {
        seat = s;
        passenger = p;
        booked = b;
    }

    friend class TicketChecker;
};

class TicketChecker {
public:
    void check(TrainSeat t) {
        cout << "Seat Number: " << t.seat << endl;

        if (t.booked) {
            cout << "Status: Booked" << endl;
            cout << "Passenger: " << t.passenger;
        }
        else {
            cout << "Status: Available";
        }
    }
};

int main() {
    TrainSeat t(25, "Rudra", true);

    TicketChecker c;
    c.check(t);

    return 0;
}