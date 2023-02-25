#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple {
public: 
	Simple() {
		cout << "I'm simple constructr!" << endl;
	}
};

int main() {
	cout << "case 1: ";
	Simple* sp1 = new Simple;

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;
	delete sp1;
	free(sp2);
	return 0;
}

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

