#include <iostream>
using namespace std;

class SoSimple {
private :
	int nm1;
	int nm2;
public :
	SoSimple(int n1, int n2) : nm1(n1), nm2(n2) {
		// Empty
	}
	SoSimple(const SoSimple& copy) : nm1(copy.nm1), nm2(copy.nm2) {
		cout << "Called SoSimple(SoSimple& copy)" << endl;
	}
	void ShowSimpleData() {
		cout << nm1 << endl;
		cout << nm2 << endl;
	}
};

int main() {
	SoSimple sim1(15, 30);
	cout << "���� �� �ʱ�ȭ ����" << endl;
	SoSimple sim2(sim1);		// SoSimple sim2(sim1); ���� ��ȯ
	cout << "���� �� �ʱ�ȭ ����" << endl;
	sim2.ShowSimpleData();

	int a(5);

	return 0;
}