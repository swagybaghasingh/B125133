#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
    int bookID;
    string bookTitle;
    string studentName;
    int daysIssued;
    float fine;

public:
    void input()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cout << "Enter Book Title: ";
        cin >> bookTitle;

        cout << "Enter Student Name: ";
        cin >> studentName;

        cout << "Enter Number of Days Issued: ";
        cin >> daysIssued;
    }

    void calculateFine()
    {
        if(daysIssued > 15)
        {
            fine = (daysIssued - 15) * 2;
        }
        else
        {
            fine = 0;
        }
    }

    void display()
    {
        cout << "\nLibrary Transaction Details" << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Book Title: " << bookTitle << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Days Issued: " << daysIssued << endl;
        cout << "Fine: Rs. " << fine << endl;
    }
};

int main()
{
    LibraryBook b;

    b.input();
    b.calculateFine();
    b.display();

    return 0;
}