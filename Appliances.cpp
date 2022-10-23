#include "Appliances.h"
#include "Device.h"

Appliances::Appliances(int weight) : _weight(weight)
{
}

void Appliances::ShowSpec()
{
    cout << "���,�����: " << _weight << endl;
}

Fridge::Fridge(int weight, int power) : Appliances(weight), _power(power)
{
}

void Fridge::ShowSpec()
{
    cout << "���,�����: " << _weight << endl
        << "��������, ����: " << _power << endl;
}

�icrowave::�icrowave(int weight, int power) : Appliances(weight), _power(power)
{
}

void �icrowave::ShowSpec()
{
    cout << "���,�����: " << _weight << endl
        << "��������, ����: " << _power << endl;
}