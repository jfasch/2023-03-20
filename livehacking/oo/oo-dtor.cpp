#include <iostream>
using namespace std;


class Sensor
{
public:
    virtual ~Sensor() {}
    virtual double temperature()
    {
        cout << __PRETTY_FUNCTION__ << endl;
        return 666;
    }
};

class ConcreteSensor : public Sensor
{
public:
    double temperature() override
    {
        cout << __PRETTY_FUNCTION__ << endl;
        return 42;
    }
};


int main()
{
    ConcreteSensor cs;
    Sensor* s = &cs;
    cout << s->temperature() << endl;
    return 0;
}
