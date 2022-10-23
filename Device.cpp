#include "Device.h"

Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}

void Device::ShowSpec()
{
    cout << "������� �������, �����/���: " << _batteryLife << endl;
}

SmartPhone::SmartPhone(int batteryLife, int weight) : Device(batteryLife), _weight(weight)
{
}

void SmartPhone::ShowSpec()
{
    cout << "������� �������, �����/���: " << _batteryLife << endl
        << "���,�����: " << _weight << endl;
}

Console::Console(int batteryLife, int power) : Device(batteryLife), _power(power)
{
}

void Console::ShowSpec()
{
    cout << "������� �������, �����/���: " << _batteryLife<< endl
        << "��������, ����: " << _power << endl;
}
