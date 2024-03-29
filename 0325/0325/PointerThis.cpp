#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

class SoSimple {
private :
	int num;
public :
	SoSimple(int n) : num(n) {
		cout << "num=" << num << ", " << "address=" << this << endl;
	}
	void ShowSimpleData() {
		cout << num << endl;
	}
	SoSimple* GetThisPointer() {
		return this;
	}
};

int main() {
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();	// sim1 按眉狼 林家 蔼 历厘
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();	// sim2 按眉狼 林家 蔼 历厘
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}