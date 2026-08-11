#include <iostream>
using namespace std;

class Product
{
private:
    int id;
    string name;
    float price;
    int quantity;

public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> id;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << id << "\t"
             << name << "\t"
             << price << "\t"
             << quantity << endl;
    }

    float cost()
    {
        return price * quantity;
    }
};

int main()
{
    int n;
    float total = 0;

    cout << "Enter number of products: ";
    cin >> n;

    Product *cart;

    cart = new Product[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        cart[i].input();
    }

    cout << "\nProduct Details" << endl;
    cout << "ID\tName\tPrice\tQuantity" << endl;

    for (int i = 0; i < n; i++)
    {
        cart[i].display();
        total = total + cart[i].cost();
    }

    cout << "\nTotal Amount = " << total << endl;

    delete[] cart;

    return 0;
}