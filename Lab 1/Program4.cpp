#include <iostream>
#include <string>
using namespace std;

struct Product
{
    int productId;
    string productName;
    float price;
    int quantity;
};

int main()
{
    Product p;
    float totalCost;

    cout << "Enter Product ID: ";
    cin >> p.productId;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, p.productName);

    cout << "Enter Price: ";
    cin >> p.price;

    cout << "Enter Quantity: ";
    cin >> p.quantity;

    totalCost = p.price * p.quantity;

    cout << "\nProduct Details\n";
    cout << "Product ID: " << p.productId << endl;
    cout << "Product Name: " << p.productName << endl;
    cout << "Price: " << p.price << endl;
    cout << "Quantity: " << p.quantity << endl;
    cout << "Total Cost: " << totalCost << endl;

    return 0;
}
