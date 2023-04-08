#include <iostream>
using namespace std;

class SoSimple {
private :
	int num;
public :
	SoSimple(int n) : num(n) { }
	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}
	void ShowData() const {
		cout << "num: " << num << endl;
	}
};

int main() {
	const SoSimple obj(7);
	// SoSimple obj2(8);
	// obj2.AddNum(20).ShowData();
	obj.ShowData();
	return 0;
}
