#include <iostream>
using namespace std;

class Counter
{
    int value;

public:
    Counter(int v = 0)
    {
        value = v;
    }

    // Prefix increment
    Counter operator++()
    {
        ++value;
        return *this;
    }

    // Postfix increment
    Counter operator++(int)
    {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Counter c(5);

    cout << "Initial value: ";
    c.display();

    cout << "After prefix ++c: ";
    ++c;
    c.display();

    cout << "Before postfix c++: ";
    c.display();

    c++;

    cout << "After postfix c++: ";
    c.display();

    return 0;
}