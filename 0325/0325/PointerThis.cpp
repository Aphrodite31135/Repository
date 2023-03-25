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

};

int main() {

}