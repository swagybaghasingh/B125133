#include <iostream>
using namespace std;

class Temperature
{
    float celsius;

public:
    Temperature(float c = 0)
    {
        celsius = c;
    }

    bool operator<(Temperature t)
    {
        return celsius < t.celsius;
    }

    bool operator>(Temperature t)
    {
        return celsius > t.celsius;
    }

    float getTemperature()
    {
        return celsius;
    }
};

int main()
{
    Temperature t1(25);
    Temperature t2(30);

    if (t1 < t2)
        cout << t1.getTemperature()
             << " C is lower than "
             << t2.getTemperature() << " C" << endl;

    else if (t1 > t2)
        cout << t1.getTemperature()
             << " C is higher than "
             << t2.getTemperature() << " C" << endl;

    else
        cout << "Both temperatures are equal." << endl;

    return 0;
}