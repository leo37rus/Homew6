#pragma once
#include "Appliances.h"
#include "Device.h"



class roboCleaner final : public Device, Appliances
{
public:
	roboCleaner(int weight, int batteryLife);
	void ShowSpec() override;
};

