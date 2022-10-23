#include "Appliances.h"
#include "Device.h"

Appliances::Appliances(int weight) : _weight(weight)
{
}

void Appliances::ShowSpec()
{
    cout << "Âåñ,ãðàìì: " << _weight << endl;
}

Fridge::Fridge(int weight, int power) : Appliances(weight), _power(power)
{
}

void Fridge::ShowSpec()
{
    cout << "Âåñ,ãðàìì: " << _weight << endl
        << "Ìîùíîñòü, âàòò: " << _power << endl;
}

Ìicrowave::Ìicrowave(int weight, int power) : Appliances(weight), _power(power)
{
}

void Ìicrowave::ShowSpec()
{
    cout << "Âåñ,ãðàìì: " << _weight << endl
        << "Ìîùíîñòü, âàòò: " << _power << endl;
}