#include <iostream>
#include <cstring>
using namespace std;

class Gun {
private:
	int bullet;	// 장전된 총알의 수
public:
	Gun(int bnum) : bullet(bnum) { }
	void Shot() {
		cout << "Bang" << endl;
		bullet--;
	}
};

class Police {
private :
	int handcuffs;	// 소유한 수갑의 수
	Gun* pistol;	// 소유하고 있는 권총
public :
	Police(int bnum, int bcuff) : handcuffs(bcuff) {
		if (bnum > 0)
			pistol = new Gun(bnum);
		else
			pistol = nullptr;
	}
	void PutHandcuff() {
		cout << "Snap" << endl;
		handcuffs--;
	}
	void Shot() {
		if (pistol == NULL)
			cout << "Hut Bang" << endl;
		else
			pistol->Shot();
	}
	~Police() {
		if (pistol != NULL)
			delete pistol;
	}
};

int main() {
	Police pman1(5, 3);
	pman1.Shot();
	pman1.PutHandcuff();

	Police pman2(0, 3);	// 권총을 소유하지 않은 경찰
	pman2.Shot();
	pman2.PutHandcuff();

	return 0;
}