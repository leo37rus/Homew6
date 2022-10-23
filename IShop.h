#pragma once 
#include <iostream>
using namespace std;

class IShop
{
public:
    virtual void ShowSpec() = 0;
    virtual ~IShop() = default;
};
