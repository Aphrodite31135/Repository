//#include <iostream>
//using namespace std;
//
//void SwapPointer(int *(&a), int *(&b)) {
//	int* temp = a;
//
//	a = b;
//	b = temp;
//}
//
//int main() {
//	int nm1 = 5;
//	int* ptr1 = &nm1;
//
//	int nm2 = 10;
//	int* ptr2 = &nm2;
//
//	cout << nm1 << endl << ptr1 << endl << nm2 << endl << ptr2 << endl;
//	SwapPointer(ptr1, ptr2);
//	cout << nm1 << endl << ptr1 << endl << nm2 << endl << ptr2 << endl;
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int addnum(int& a) {
//	a += 1;
//	return a;
//}
//
//int revnum(int& a) {
//	a *= -1;
//	return a;
//}
//
//int main() {
//	int num1 = 10;
//	int& num2 = num1;
//
//	cout << num1 << endl;
//	cout << addnum(num2) << endl;
//	cout << revnum(num2) << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int num = 12;
//	int* ptr = &num;
//	int** dptr = &ptr;
//
//	int& ref = num;
//	int* (&pref) = ptr;
//	int** (&dpref) = dptr;
//
//	cout << ref << endl;
//	cout << *pref << endl;
//	cout << **dpref << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int num1 = 1020;
//	int& num2 = num1;
//
//	num2 = 3047;
//	cout << "VAL: " << num1 << endl;
//	cout << "REF: " << num2 << endl;
//
//	cout << "VAL: " << &num1 << endl;
//	cout << "REF: " << &num2 << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int p_num_counter(int a) {
//	if (a > 0)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	bool pcount;
//	int num;
//	cout << "정수 입력 : ";
//	cin >> num;
//
//	pcount = p_num_counter(num);
//	if (pcount)
//		cout << "양수 입니다" << endl;
//	else
//		cout << "양수가 아닙니다" << endl;
//
//	return 0;
//}
