#include "Robocleaner.h"

roboCleaner::roboCleaner(int weight, int batteryLife) : Appliances(weight), Device(batteryLife)
{
}

void roboCleaner::ShowSpec()
{
	cout << "���, �����: " << _weight << endl
		<< "������� �������, �����/���: " << _batteryLife << endl;
}