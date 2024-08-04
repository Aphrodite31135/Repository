#include <iostream>
#include <cstring>
using namespace std;

class Gun {
private:
	int bullet;	// ������ �Ѿ��� ��
public:
	Gun(int bnum) : bullet(bnum) { }
	void Shot() {
		cout << "Bang" << endl;
		bullet--;
	}
};

class Police {
private :
	int handcuffs;	// ������ ������ ��
	Gun* pistol;	// �����ϰ� �ִ� ����
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

	Police pman2(0, 3);	// ������ �������� ���� ����
	pman2.Shot();
	pman2.PutHandcuff();

	return 0;
}