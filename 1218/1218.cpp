/* 정답 */
/////*             Object-Oriented Programming, Midterm exam (2023-1, CSE103-02)                       */
////// Write your answers in Korean or English(답안은 한국어 또는 영어로 작성하시오).
////#include <iostream>
////#include <vector>
////#include <list>
////#include <string>
////#include <functional>
////#include <algorithm>
////class Ex {
////	int x;
////public:
////	Ex(int x = 0) : x(x) {}
////	int Get() const {
////		return x;
////	}
////};
////class Vector {
////	int x, y;
////public:
////	Vector(int x, int y) : x(x), y(y) {}
////	int operator* (const Vector& v) const {
////		return v.x * x + v.y * y;
////	}
////	friend std::ostream& operator <<(std::ostream& os, const Vector& v);
////};
////std::ostream& operator <<(std::ostream& os, const Vector& v) {
////	os << v.x << ", " << v.y;
////	return os;
////}
////class B {
////	int x;
////public:
////	B(int x) : x(x) {}
////	void Print() const {
////		std::cout << x;
////	}
////};
////class D : public B {
////	int y;
////public:
////	D(int x, int y) : B(x), y(y) {}
////	void Print() const {
////		B::Print();
////		std::cout << ", " << y;
////	}
////};
////class P {
////protected:
////	int x;
////public:
////	P(int x) : x(x) {}
////	virtual int Get() const {
////		return x;
////	}
////};
////class S : public P {
////	int y;
////public:
////	S(int x, int y) : P(x), y(y) {}
////	int Get() const override {
////		return x * y;
////	}
////};
////template <class T>
////T Divide(const T& x1, const T& x2) {
////	return x1 / x2;
////}
////int Sum(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end) {
////	int sum = 0;
////	std::vector<int>::iterator it = begin;
////	while (it != end) {
////		sum += *it++;
////	}
////	return sum;
////}
////std::string Sum(const std::vector<std::string>::iterator& begin, const std::vector<std::string>::iterator& end) {
////	std::string sum;
////	std::vector<std::string>::iterator it = begin;
////	while (it != end) {
////		sum += *it++;
////	}
////	return sum;
////}
///////////// 답안 끝
//

/* 실습 */
//#include <iostream>
//#include <vector>
//using namespace std;
//class Ex {
//	int x;
//public :
//	Ex(int x = 0) : x(x) {}
//	int Get() const { return this->x; }
//};
//class Vector {
//public :
//	int x, y;
//	Vector(int x = 0, int y = 0) : x(x), y(y) {}
//	int operator*(const Vector& v2) const { return { this->x * v2.x + this->y * v2.y }; }
//};
//ostream& operator<< (ostream& os, const Vector& v) {
//	os << v.x<<", "<<v.y;
//	return os;
//}
//class B {
//	int x;
//public :
//	B(int x = 0) : x(x) {}
//	void Print() { std::cout << x << '\n'; }
//};
//class D : public B {
//	int x, y;
//public :
//	D(int x = 0, int y = 0) : x(x), y(y) {}
//	void Print() { std::cout << this->x << ", " << this->y << '\n'; }
//};
//class P {
//	int x;
//public :
//	P(int x = 0) : x(x) {}
//	virtual int Get() { return this->x; }
//};
//class S : public P{
//	int x, y;
//public :
//	S(int x = 0, int y = 0) : x(x), y(y) {}
//	virtual int Get() { return this->x * this->y; }
//};
/* 7-1 */
//template<typename T>
//T Sum(const std::vector<T> v) {
//	T sum;
//	if (v.size() <= 0) throw std::exception();
//	for (auto i = v.begin(); i != v.end(); ++i) {
//		if (i == v.begin()) sum = *i;
//		else sum += *i;
//	}
//	return sum;
//}
/* 메인 */
//int main() {
//	// 전역 변수 및 표준 함수 사용 금지(Do not use global variables and standard functions)
//	std::cout << "\n### 1 ###" << std::endl;
//	// 1(2). 아래와 같이 동작하는 Ex 클래스를 정의하라. - 함수, 변수 및 수식의 사용을 최소화
//	Ex e1, e2(1);
//	const Ex e3(2);
//	std::cout << e1.Get() << ", " << e2.Get() << ", " << e3.Get() << std::endl; // 출력: 0, 1, 2
//	std::cout << "\n### 2 ###" << std::endl;
//	// 2(2). 아래와 같이 동작하는 Vector 클래스와 << 연산자(비멤버)를 정의하라. - 함수, 변수 및 수식의 사용을 최소화
//	const Vector s1(2, 3), s2(5, -1);
//	std::cout << s1 << "     " << s2 << std::endl; // 출력: 2, 3     5, -1
//	std::cout << s1 * s2 << std::endl; // 출력: 7 <- (2*5 + 3*-1), define it as a member method
//	std::cout << "\n### 3 ###" << std::endl;
//	// 3(3). 아래와 같이 동작하는 B와 D 클래스를 정의하라. - B는 D의 base class, 함수, 변수 및 수식의 사용을 최소화
//	B b(1);
//	D d(3, 4);
//	b.Print(); // 출력: 1
//	std::cout << std::endl;
//	d.Print(); // 출력: 3, 4
//	std::cout << std::endl;
//	b = static_cast<B>(d);
//	b.Print(); // 출력: 3
//	std::cout << std::endl;
//	std::cout << "\n### 4 ###" << std::endl;
//	// 4(3). 아래와 같이 동작하는 P와 S 클래스를 정의하라. - P는 S의 base class, 함수, 변수 및 수식의 사용을 최소화
//	P p(2); // Get returns 2
//	S s(3, 5); // Get returns 3*5
//	P* ptr = &p;
//	std::cout << ptr->Get() << std::endl; // 출력: 2
//	ptr = &s;
//	std::cout << ptr->Get() << std::endl; // 출력: 15
//	std::cout << "\n### 5 ###" << std::endl;
//	// 5(3). 아래와 같이 동작하는 Divide 함수 템플릿을 정의하라. - 함수, 변수 및 수식의 사용을 최소화
//	std::cout << Divide(3, 2) << std::endl; // 출력: 1 <- 3/2
//	std::cout << Divide(3., 2.) << std::endl; // 출력: 1.5 <- 3./2.
//	std::cout << "\n### 6 ###" << std::endl;
//	// 6(3). 아래 코드에서 v1의 요소에서 3의 배수의 개수를 출력하도록 [A] 위치에 람다 함수를 정의하라. - 함수, 변수 및 수식의 사용을 최소화
//	std::vector<int> v1{ 1, 2, 3, 6, 4, 9, 1 };
//	std::cout << std::count_if(v1.begin(), v1.end(), [](int x) { return !(x % 3); }) << std::endl; // 출력: 3
//	std::cout << "\n### 7 ###" << std::endl;
//	// 7(4). 아래와 같이 동작하는 두 개의 Sum 함수를 정의하라. - 함수, 변수 및 수식의 사용을 최소화
//	std::vector<int> w{ 1, 2, 3, 4, 5 };
//	std::vector<std::string> str{ "C++", " ", "Programming" };
//	// type of w iterator: std::vector<int>::iterator
//	// type of str iterator: std::vector<std::string>::iterator
//	std::cout << Sum(w.begin(), w.end()) << std::endl; // 출력: 15
//	std::cout << Sum(str.begin(), str.end()) << std::endl; // 출력: C++ Programming
//	// 7-1
//	std::vector<int> w{ 1, 2, 3, 4, 5 };
//	std::vector<std::string> str{ "C++", " ", "Programming" };
//	std::cout << Sum(w) << std::endl; // 출력: 15
//	std::cout << Sum(str) << std::endl; // 출력: C++ Programming
//}

/* array pointer */
//#include <iostream>
//void Print(int p[][2]) {
//	for (int i = 0; i < 3; i++) { 
//		for (int j = 0; j < 2; j++)
//			std::cout << *(*(p + i) + j) << " ";
//		std::cout << '\n';
//	}
//}
//int main() {
//	int a[][2] = { {1}, {2,3}, {4, 5} };
//	Print(a);
//}

/* Rvalue Reference */
//#include <iostream>
//class Ex {
//public:
//	int x;
//	Ex(int x = 1) : x(x) {}
//	Ex(const Ex& e) : x(e.x) {}
//	void Set(int xx) { x = xx; }
//	Ex operator+ (int n) { return { x = n }; }
//};
//void Fn1(Ex e1) { e1.Set(1); }
//void Fn2(Ex&& e1) { e1.Set(2); }
//int main() {
//	Ex e;
//	Fn1(e);
//	Fn2(e + 1);
//	std::cout << e.x << '\n';
//}