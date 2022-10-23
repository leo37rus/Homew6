#include "Device.h"

Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}

void Device::ShowSpec()
{
    cout << "Ёмкость батареи, ампер/час: " << _batteryLife << endl;
}

SmartPhone::SmartPhone(int batteryLife, int weight) : Device(batteryLife), _weight(weight)
{
}

void SmartPhone::ShowSpec()
{
    cout << "Ёмкость батареи, ампер/час: " << _batteryLife << endl
        << "Вес,грамм: " << _weight << endl;
}

Console::Console(int batteryLife, int power) : Device(batteryLife), _power(power)
{
}

void Console::ShowSpec()
{
    cout << "Ёмкость батареи, ампер/час: " << _batteryLife<< endl
        << "Мощность, ватт: " << _power << endl;
}
