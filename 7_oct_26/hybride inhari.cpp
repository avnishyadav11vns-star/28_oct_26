#include <iostream>
using namespace std;

class vehicle
{
public:
    void travel()
    {
        cout << "Class vehicle" << endl;
    }
};

class car : public vehicle
{
public:
    void car_travel()
    {
        cout << "Class car" << endl;
    }
};

class bus : public vehicle
{
public:
    void bus_travel()
    {
        cout << "Class bus" << endl;
    }
};

class fare : public car, public bus
{
public:
    void fare_travel()
    {
        cout << "Class fare" << endl;
    }
};

int main()
{
    fare obj;

    obj.car_travel();
    obj.bus_travel();
    obj.fare_travel();

    return 0;
}