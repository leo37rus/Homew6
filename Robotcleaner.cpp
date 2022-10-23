#include "Robocleaner.h"

roboCleaner::roboCleaner(int weight, int batteryLife) : Appliances(weight), Device(batteryLife)
{
}

void roboCleaner::ShowSpec()
{
	cout << "Вес, грамм: " << _weight << endl
		<< "Ёмкость батареи, ампер/час: " << _batteryLife << endl;
}