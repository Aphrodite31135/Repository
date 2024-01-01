/* 1. 아래 C++ 코드의 출력을 확인하고, 동작을 설명하시오. */
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <exception>
#include <stdexcept>
template <class iterator>
void Print(iterator begin, iterator end) {
	for (iterator iter = begin; iter != end; iter++)
		std::cout << *iter << ", ";
	std::cout << std::endl;
}
std::function<double(double)> Composition(std::function<double(double)> f, std::function<double(double)> g) {
	return [f, g](double x) { return f(g(x)); };
}
double f1(double x) {
	return x * x;
}
double f2(double x) {
	return 2 * x * x + 3 * x + 1;
}
double f3(double x) {
	if (x == 0) throw std::invalid_argument("divide by 0");
	return 1. / x;
}
void Run() {
	auto c4 = (f1, f3);
	std::cout << c4(1) << std::endl;
	std::cout << c4(0) << std::endl;
	std::cout << c4(2) << std::endl;
}
int main() {
	std::vector<int> v1{ 1, 2, 3, 4, 5 };
	Print(v1.begin(), v1.end());

	v1.erase(std::remove_if(v1.begin(), v1.end(), [](auto x) {return !(x % 2); }), v1.end());
	Print(v1.begin(), v1.end());
	std::cout << std::endl;

	auto c1 = Composition(f1, f2);
	auto c2 = Composition(f2, f1);
	auto c3 = Composition([](double x) {return x + 2; }, [](double x) {return x * x + 1; });
	std::cout << c1(1) << std::endl;
	std::cout << c2(1) << std::endl;
	std::cout << c3(1) << std::endl;
	std::cout << std::endl;

	auto c4 = (f1, f3);
	try {
		Run();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}