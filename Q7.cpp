#include <iostream>
#include <string>
using namespace std;

class Product
{
    int productID;
    string productName;
    int quantity;
    float price;

public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price per Unit: ";
        cin >> price;
    }

    void sell()
    {
        int sold;

        cout << "Enter quantity sold: ";
        cin >> sold;

        if(sold <= quantity)
        {
            quantity = quantity - sold;
            cout << "Product sold successfully." << endl;
        }
        else
        {
            cout << "Not enough stock available." << endl;
        }
    }

    void display()
    {
        cout << "\nProduct Details" << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity Available: " << quantity << endl;
        cout << "Price per Unit: " << price << endl;
        cout << "Total Inventory Value: "
             << quantity * price << endl;
    }
};

int main()
{
    Product p;

    p.input();
    p.display();

    p.sell();

    cout << "\nAfter Selling:" << endl;
    p.display();

    return 0;
}