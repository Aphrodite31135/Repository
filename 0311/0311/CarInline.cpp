#include <cstring>
#include "CarInline.h"
using namespace std;

void Car::InitMembers(const char* ID, int fuel) {
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::Accel() {
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= Car_Const::FUEL_Step;

	if ((curSpeed + Car_Const::ACC_Step) >= Car_Const::MAX_Spd) {
		curSpeed = Car_Const::MAX_Spd;
		return;
	}
	curSpeed += Car_Const::ACC_Step;
}