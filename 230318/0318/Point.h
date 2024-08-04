#pragma once

class Point {
private :
	int x;
	int y;

public :
	bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool setX(int xpos);
	bool setY(int ypos);
};