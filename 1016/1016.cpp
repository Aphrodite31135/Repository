#include <iostream>

int main() {
	int num[3] = { 1, 3, 5 };
	int* numptr = &num[0];
	int* numptr2 = &num[2];
	std::cout << *numptr << std::endl;
	std::cout << *(numptr + 1) << std::endl;
}

//void countdown(int n = 10) {
//	while (n >= 0) std::cout << n-- << std::endl;
//}
//int main() {
//	countdown(5);
//	std::cout << "---------" << std::endl;
//	countdown();
//}
////int sum_range(int n = 0, int m = 100);	// (O)
////int sum_range(int n, int m = 100);		// (O)
////int sum_range(int n = 0, int m);		// (X)

//int x;
//int main() {
//	int x = 10;
//	std::cout << x << std::endl;	// local value
//	std::cout << ::x << std::endl;	// global value
//}

//double result = 0.0, arg1, arg2;
//void get_input() { std::cin >> arg1 >> arg2; }
//void report()	{ std::cout << result << std::endl; }
//void add()		{ result = arg1 + arg2; }
//void subtract() { result = arg1 - arg2; }
//int main() {
//	get_input();
//	add();
//	report();
//}

//#define words "Beginning execution of increment, x = "
//#define take_out std::cout<<words<<x<<std::endl;
//void increment(int x) {
//	take_out;
//	x++;
//	take_out;
//}
//int main() {
//	int x = 5; 
//	take_out;
//	increment(x);
//	take_out;
//	{
//		int x = 10;
//		take_out;
//	}
//	take_out;
//}

//int gcd(int num1, int num2) {
//	int min = (num1 < num2) ? num1 : num2;
//	int largestFactor = 1;
//	for (int i = 2; i <= min; i++)
//		if (num1 % i == 0 && num2 % i == 0) largestFactor = i;
//	return largestFactor;
//}
//int main() {
//	std::cout << gcd(36, 24);
//}

//#include <cstdlib>
//#define MAX_TIME = 0x7ffff
//int main() {
//	srand(static_cast<unsigned>(time(0))); // = srand((unsigned)time(0));
//	int num = rand();
//	std::cout << num;
//}

//#include <cmath>
//double Abs(double x) {
//	return (x > 0) ? x : -x;
//}
//int main() {
//	std::cout << Abs(10.5) << std::endl;
//}