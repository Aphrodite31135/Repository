#include <iostream>
#include "Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos < 0) {
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	
	x = xpos;
	y = ypos;
	return true;
}

int Point::GetX() const
{
	return x;
}

int Point::GetY() const
{
	return y;
}

bool Point::setX(int xpos)
{
	if (0 > xpos || 100<xpos) {
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::setY(int ypos)
{
	if (y < 0 || y>100) {
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	y = ypos;
	return true;
}
