#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int bookId;
    string title;
    string author;
    float price;
};

int main()
{
    Book b;

    cout << "Enter Book ID: ";
    cin >> b.bookId;

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, b.title);

    cout << "Enter Author Name: ";
    getline(cin, b.author);

    cout << "Enter Price: ";
    cin >> b.price;

    cout << "\nBook Details\n";
    cout << "Book ID: " << b.bookId << endl;
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Price: " << b.price << endl;

    return 0;
}
