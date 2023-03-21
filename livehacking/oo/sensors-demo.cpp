#include <iostream>
#include <array>
#include <cassert>
using namespace std;

class Sensor
{
public:
    virtual ~Sensor() = default;
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

void restliches_system(std::array<Sensor*, 2> sensors)
{
    // runtime phase
    int n = 7;
    while (n--) {
        cout << "round " << n << endl;
        for (size_t i=0; i<sensors.size(); i++)
            cout << sensors[i]->temperature() << endl;
    }
    
    for (auto s = sensors.begin(); s != sensors.end(); ++s)
        delete *s;
}

int main()
{
    // setup phase
    OnePossibleSensor* ops = new OnePossibleSensor;
    AnotherPossibleSensor* aps = new AnotherPossibleSensor;

    // runtime productive super duper ado mqtt
    restliches_system(std::array<Sensor*, 2>{ops, aps});

    return 0;
}
