#include <iostream>

int main() {
	int x;
	x = 10;
	std::cout << x << std::endl;
	std::cout << 'x' << std::endl;
	std::cout << (x = -2147483649) << std::endl;

	return 0;
}

//int main() {
//	std::cout << '9' << std::endl;
//	std::cout << int('9') << std::endl;
//
//	std::cout << char('45') << std::endl;
//	std::cout << std::hex << 15 << std::endl;
//	std::cout << 31 << std::endl;
//
//	std::cout << std::dec <<  9.0 / 2 << std::endl;
//	std::cout << 9 / 2 << std::endl;
//	std::cout << 9. / 2 << std::endl;
//	std::cout << 5 / 2. << std::endl;
//	std::cout << (float)9 / 2 << std::endl;
//
//	std::cout << 3 - 0.1234 << std::endl;
//	std::cout << 1'2345'6789'012 << std::endl;
//
//	return 0;
//}

//class Student {
//public:
//	int n1, n2, n3;
//
//	Student(int num1, int num2, int num3)
//		: n1(num1), n2(num2), n3(num3) { } 
//};
//
//int main() {
//	Student Std = Student(1, 2, 3);
//
//	std::cout << Std.n1 << Std.n2 << Std.n3 << std::endl;
//
//	return 0;
//}