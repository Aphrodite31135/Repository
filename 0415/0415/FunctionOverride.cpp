#include <iostream>
using namespace std;

class First {
public :
	virtual void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First {
public :
	void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second {
public:
	void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main() {
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	delete fptr;
	return 0;
}