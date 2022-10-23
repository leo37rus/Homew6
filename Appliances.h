#pragma once 
#include "IShop.h"

class Appliances : virtual public IShop
{
public:
    Appliances(int weight);
    void ShowSpec() override;

protected:
    int _weight;
};

class Fridge final : public Appliances
{
public:
    Fridge(int weight, int power);
    void ShowSpec() override;

protected:
    int _power;
};

class �icrowave final : public Appliances
{
public:
    �icrowave(int weight, int power);
    void ShowSpec() override;
protected:
    int _power;
};