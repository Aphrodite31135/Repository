#include <iostream>
using namespace std;

class Point {
public :
	int x;	// x좌표의 범위는 0이상 100이하
	int y;	// y좌표의 범위는 0이상 100이하
};

class Rectangle {
public :
	Point upLeft;
	Point lowRight;

public :
	void ShowRecInfo() {
		cout << "좌 상단: " << '[' << upLeft.x << ", " << upLeft.y << ']' << endl;
		cout << "우 하단: " << '[' << lowRight.x << ", " << lowRight.y << ']' << endl;
	}
};

int main(void) {
	Point Pos1 = { -2,4 };
	Point Pos2 = { 5,9 };
	Rectangle rec = { Pos2,Pos1 };
	rec.ShowRecInfo();
	return 0;
}
