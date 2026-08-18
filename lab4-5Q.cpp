#include <iostream>
using namespace std;

class FoodOrder {
private:
    int id, quantity;
    string food;
    float price;

public:
    FoodOrder(int i, string f, int q, float p) {
        id = i;
        food = f;
        quantity = q;
        price = p;
    }

    friend void calculateBill(FoodOrder o);
};

void calculateBill(FoodOrder o) {
    float total = o.quantity * o.price;

    cout << "Order ID: " << o.id << endl;
    cout << "Food: " << o.food << endl;
    cout << "Quantity: " << o.quantity << endl;
    cout << "Price: " << o.price << endl;
    cout << "Total Bill: " << total;
}

int main() {
    FoodOrder o(101, "Pizza", 2, 250);

    calculateBill(o);

    return 0;
}