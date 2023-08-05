#include <iostream>
#include <string>
using namespace std;

int chessboard[8][8];

enum Direction{
	R,
	L,
	B,
	T,
	RT,
	LT,
	RB,
	LB,
};

Direction Convert(string str) {
	if (str == "R") 
		return R;
	if (str == "L") 
		return L;
	if (str == "B")
		return B;
	if (str == "T")
		return T;
	if (str == "RT")
		return RT;
	if (str == "LT")
		return LT;
	if (str == "RB")
		return RB;
	if (str == "LB")
		return LB;
}

class Pos {
public :
	int xpos = 0;
	int ypos = 0;

	int MovePos(string str) {
		switch (Convert(str)) {
		case R:
			if (PossibleTest(this->xpos, this->ypos, 1, 0))
				return;
		case L:
			this->xpos - 1;
		case B:
			this->ypos + 1;
		case T:
			this->ypos - 1;
		case RT:
			this->xpos + 1;
			this->ypos - 1;
		case LT:
			this->xpos - 1;
			this->ypos - 1;
		case RB:
			this->xpos + 1;
			this->ypos + 1;
		case LB:
			this->xpos - 1;
			this->ypos + 1;
		}
	}

	int PossibleTest(int& xpos, int& ypos, int x, int y) {
		if ((xpos + x >= 0 and xpos + x <= 7) and (ypos + y >= 0 and ypos + y <= 7))
			return true;
		else
			return false;
	}
};

int main() {
	return 0;
}