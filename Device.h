#pragma once 
#include "IShop.h"

class Device : virtual public IShop
{
public:
    Device(int batteryLife);
    virtual void ShowSpec() override;

protected:
    int _batteryLife;
};

class SmartPhone final : public Device
{
public:
    SmartPhone(int batteryLife, int weight);
    void ShowSpec() override;

protected:
    int _weight;    
};

class Console final : public Device
{
public:
    Console(int weight, int power);
    void ShowSpec() override;

protected:
    int _power;
};