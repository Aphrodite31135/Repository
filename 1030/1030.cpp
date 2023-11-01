#include <iostream>
void F1(int p[][3], int size) {
	if (size != 0) {
		std::cout << *p << ' ' << p << std::endl;
		F1(p + 1, size - 1);
	}
}
void F2(int(*p)[3], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << p[i][j] << '  ';
		}
		std::cout<< std::endl;
	}
}
void F2(int *p, int size) {
	for (int i = 0; i < size; i++) std::cout << *pw << ' ';
}
int main() {
	int num[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12} };
	F2(num, 4);
	for (int i = 0; i < 4; i++) {
		F2(num[i], 3);
		std::cout << std::endl;
	}
}
//int main() {
//	int num[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//	for (int* p = &num[0][0]; p <= &num[2][2]; p++)
//		std::cout << p << ' ' << *p << std::endl;
//}

//#include <iostream>
//void Iterative_Print(const int* a, int n);
//void Recursive_Print(const int* a, int n);
//int main() {
//	int a[] = { 2,4,6,8,10,12,14,16,18,20 },
//		* begin, * end, * cursor;
//	//begin = a;
//	//end = a + 10;
//	//cursor = begin;
//	//while (cursor != end) {
//	//	std::cout << *cursor << ' ';
//	//	cursor++;
//	//}
//	Iterative_Print(a, 10);
//	Recursive_Print(a, 10);
//}
//void Iterative_Print(const int* a, int n) {
//	for (int i = 0; i < n; i++) std::cout << *(a++) << ' '; 
//}
//void Recursive_Print(const int* a, int n) {
//	if (n != 0) {
//		std::cout << *a << ' ';
//		Recursive_Print(a+1, n - 1);
//	}
//}

//#include <iostream>
//int main() {
//	int a[] = { 2,4,6,8,10,12,14,16,18,20 }, * p;
//	p = &a[0];
//	for (int i = 0; i < 10; i++) {
//		// std::cout << *p + ' ';
//		// p++;
//		// std::cout << *p++ << ' ';	// a[i]; i+=1;
//		// std::cout << (*p)++ << ' ';	// a[0]++;
//	}
//}

//#include <iostream>
//short F(int *num) {
//	short* n = *num;
//	short nm = (*n + 1) + (*n + 2);
//	return nm;
//}
//int main() {
//	int num[] = { 256, 512, 64, 1024 };
//	std::cout << F(num);
//}

//#include <iostream>
//void F0(int arr[]) {
//	*arr = 1;
//	*(arr + 1) = 2;
//	*(arr + 2) = 3;
//}
//void F1(int* arr0) {
//	std::cout << "Size of arr0 : " << sizeof(arr0) << std::endl;
//	std::cout << arr0 << " " << arr0 + 1 << " " << arr0 + 2 << std::endl;
//	*arr0 = 4;
//	*(arr0 + 1) = 5;
//	*(arr0 + 2) = 6;
//}
//int main() {
//	int arr[] = { 10, 20, 30 };
//	F1(arr);
//	for (int i = 0; i < sizeof(arr)/4; i++) std::cout << arr[i] << " ";
//}