#include <iostream>
#include <array>
#include <cassert>
using namespace std;

class Sensor
{
public:
    virtual double temperature() = 0;
};

class OnePossibleSensor : public Sensor
{
public:
    double temperature()
    {
        return 42;
    }
};

class AnotherPossibleSensor : public Sensor
{
public:
    double temperature()
    {
        return 43;
    }
};


int main()
{
    // setup phase
    OnePossibleSensor ops;
    AnotherPossibleSensor aps;

    std::array<Sensor*, 2> all_sensors = {&ops, &aps};

    // runtime phase
    for (size_t i=0; i<all_sensors.size(); i++)
        cout << all_sensors[i]->temperature() << endl;

    return 0;
}
