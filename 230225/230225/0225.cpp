#include <iostream>
using namespace std;

typedef struct __Point {
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2) {
	Point* p = new Point;

	p->xpos = p1.xpos + p2.xpos;
	p->ypos = p1.ypos + p2.ypos;

	return *p;
}

int main() {
	Point* dot1 = new Point;
	Point* dot2 = new Point;

	cin >> dot1->xpos >> dot1->ypos;
	cin >> dot2->xpos >> dot2->ypos;

	Point& dot_result = PntAdder(*dot1, *dot2);

	delete dot1;
	delete dot2;

	cout << "두 점의 합 : " << dot_result.xpos << ", " << dot_result.ypos << endl;
	
	return 0;
}

//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Simple {
//public: 
//	Simple() {
//		cout << "I'm simple constructr!" << endl;
//	}
//};
//
//int main() {
//	cout << "case 1: ";
//	Simple* sp1 = new Simple;
//
//	cout << "case 2: ";
//	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);
//
//	cout << endl << "end of main" << endl;
//	delete sp1;
//	free(sp2);
//	return 0;
//}

//#include <iostream>
//#include <string.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//using namespace std;
//
//char* MakeStrAdr(int len) {
//	// char* str = (char*)malloc(sizeof(char) * len);
//	char* str = new char[len];
//	return str;
//}
//
//int main() {
//	char* str = MakeStrAdr(20);
//	strcpy(str, "I am so happy ~");
//	cout << str << endl;
//	// free(str);
//	delete[]str;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int RefRetFuncTwo(int& ref) { // 반환형 int
//	ref++;
//	return ref;
//}
//
//int main() {
//	int num1 = 1;
//	int num2 = RefRetFuncTwo(num1);
//
//	num1 += 1;
//	num2 += 100;
//
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int& RefRetFuncOne(int& ref) { // 반환형 int&
//	ref++;
//	return ref;
//}
//
//int main() {
//	int num1 = 1;
//	int num2 = RefRetFuncOne(num1);
//
//	num1 += 1;
//	num2 += 100;
//
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int& RefRetFuncOne(int& ref) {
//	ref ++ ;
//	return ref;
//}
//
//int main() {
//	int num1 = 1;
//	int& num2 = RefRetFuncOne(num1);
//
//	num1++;
//	num2++;
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//
//	return 0;
//}

