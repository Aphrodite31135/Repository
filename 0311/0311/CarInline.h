#pragma once
#include <iostream>
#pragma warning (disable:4996)
using namespace std;

namespace Car_Const {
	enum {
		ID_Len = 20, MAX_Spd = 200, FUEL_Step = 2,
		ACC_Step = 10, BRK_Step = 10
	};
}

class Car {
private :
	char gamerID[Car_Const::ID_Len];
	int fuelGauge;
	int curSpeed;
public :
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

inline void Car::ShowCarState() {
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}

inline void Car::Break()
{
	if (curSpeed < Car_Const::BRK_Step) {
		curSpeed = 0;
		return;
	}
	curSpeed -= Car_Const::BRK_Step;
}