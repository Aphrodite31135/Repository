/* Rvalue References */
//#include <iostream>
//int main() {
//	int x = 5;
//	int&& num = x + 5;
//	std::cout << num << std::endl;
//	x += 5;
//	num = x + 5;
//	std::cout << num << std::endl;
//}

/* Class Template 02 */
//#include <iostream>
//template <typename T>
//class Ex {
//public :
//	T x;
//	Ex(T x) : x(x) {}
//	void Eq(Ex& e) { return this->x == e.x; }
//};
//template <typename T>
//bool Eq(const T& a, const T& b) { return a == b; }
//template <typename T>
//bool Eq<Ex>(const T& a, const T& b) { return a.Eq(b.x); }
//int main() {
//	Ex<int> itnm1 = 10;
//	Ex<int> itnm2 = 20; 
//	std::cout << Eq(10, 10) << std::endl;		// 1
//	std::cout << Eq(itnm1, itnm2) << std::endl;	// 0
//}

/* Class Template 01 */
//#include <iostream>
//template<typename T>
//class Point {
//public :
//	T x, y;
//	Point(T x, T y) : x(x), y(y) {}
//	void Print();
//};
//template<typename T>
//void Point<T>::Print() { std::cout << x << ", " << y << std::endl; }
//template<>	// 특정 형식에서만 다른 Print() 함수를 사용하고 싶을 때
//void Point<int>::Print() { std::cout << x + y << std::endl; }
//int main() {
//	Point<int> p1(10, 10);
//	Point<double> p2(10.5, 20.2);
//}

/* Template 01 */
//#include <iostream>
//#include <string>
//#include <vector>
//template <class T>
//bool equal(const T& a, const T& b) { return a == b; }
//template <class T>
//T sum(const std::vector<T>& v) {
//	T result = 0;
//	for (T elem : v) result += v;
//	return result;
//}
//template <class T>
//T* new_var(int size) { return new T[size]; }
//int main() {
//	int* p1 = new_var<int>(10);
//	double* p2 = new_var<double>(3.14159);
//}

/* None_Template */
//#include <iostream>
//#include <string>
//bool equal(const int& a, const int& b) { return a == b; }
//bool equal(const std::string& a, const std::string& b) { return a == b; }
//int main() {
//	std::cout << equal(2, 3) << std::endl;			// 1
//	std::cout << equal(2.2, 2.7) << std::endl;		// 1
//	std::cout << equal("abc", "abcd") << std::endl;	// 0
//}

/* Pointers */
//#include <iostream>
//class Ex {
//public :
//	int* p;
//	Ex(int x = 0) { p = new int(x); }
//	~Ex() { 
// 		std::cout << "destr" << std::endl;
//		delete p; 
//	}
//};
//Ex F(Ex e) { return e; }
//int main() {
//	Ex e;
//	Ex e2 = F(e);	// Ex F(Ex e)와 Ex e가 동일한 p를 가지고 있음.
//					// Ex::e.p 또한 Ex F(Ex e)가 소멸하며 같이 소멸되므로 Ex::e.p가 사라짐.
//	std::cout << e.p << std::endl;
//	std::cout << e2.p << std::endl;
//	// std::cout << *(e.p) << std::endl;	// Ex::e.p가 존재하지 않음.
//	// std::cout << *(e2.p) << std::endl;
//	return 0;
//}

/* Smart Pointers */
//#include <iostream>
//#include <memory>
//using namespace std;
//struct Widget {
//	int data;
//	Widget(int n) : data(n) {}
//	~Widget() { std::cout << "Destroying: " << data << std::endl; }
//};
//int main() {
//	shared_ptr<Widget> p11(new Widget(11));
//	shared_ptr<Widget> p12 = make_shared<Widget>(12);
//	auto p13 = make_shared<Widget>(13);
//	shared_ptr<Widget> p14 = p12;	// p12와 p14는 서로 공유중.
//	cout << p11.use_count() << endl;
//	cout << p12.use_count() << endl;
//	cout << p13.use_count() << endl;
//	cout << p14.use_count() << endl;
//	p11.reset();	// p11 = nullptr;	// Destroying: 11
//	p12.reset();	// p12를 reset()하더라도 p14가 같은 것을 가리키고 있으므로 소멸되지 않음.
//	p14.reset();						// Destroying: 14
//	{ shared_ptr<Widget> p15 = make_shared<Widget>(15); }
//	cout << (bool)p11 << endl;	// 0
//	cout << (bool)p12 << endl;	// 0
//	cout << (bool)p13 << endl;	// 1
//	cout << (bool)p14 << endl;	// 0
//}

/* Rvalue References */	// 개념적인 부분만 익혀두기
//#include <iostream>
//class Ex {
//public :
//	int x;
//	Ex(int x = 0) :x(x) { std::cout << "Constr. " << std::endl; }
//	Ex(const Ex& e) :x(e.x) { std::cout << "Copy constr. " << std::endl; }
//	void Set(int xx) { x = xx; }
//	Ex operator+(int n) { return { x + n }; }
//};
//void Fn1(Ex e1) { e1.Set(1); }
//void Fn2(Ex&& e1) { e1.Set(2); }
//int main() {
//	//int x = 5;
//	//const int& cr = x = 3;
//	Ex e;
//	Fn1(e);
//	Fn2(e + 1);
//	std::cout << e.x << std::endl;
//}

/* 10-03*/
//#include <iostream>
//#include <vector>
//class Base {
//public :
//	int x;
//	std::vector<int> v;
//	Base(int x = 0) : x(x) { for (int i = 0; i < x; i++) v.push_back(0); }
//	virtual void print() const { std::cout << x << std::endl; }
//	virtual void setN(const int& i, const int& num) {
//		if (i < v.size()) v[i] = num;
//	}
//	virtual void printData() const { 
//		for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
//		std::cout << std::endl;
//	}
//};
//class Derived : public Base{
//public :
//	Derived(int x = 0) : Base(x) {}
//	void insert(const int& num) { v.push_back(num); }
//};
//int main() {
//	Base b1(2), b2(10);
//
//	b1.print(); // 2
//
//	b2.print(); // 10
//
//	for (int i = 0; i < 5; i++) {
//
//		b1.setN(i, (i + 1) * 20);
//
//		b2.setN(i, (i + 1) * 10);
//
//	}
//
//	b1.printData();  // 20 40
//
//	b2.printData();  // 10 20 30 40 50 0 0 0 0 0
//
//	Derived d(5);    // Derived는 Base의 파생 클래스
//
//	d.print(); // 5
//
//	d.printData(); // 0 0 0 0 0
//
//	for (int i = 0; i < 10; i++) {
//
//		d.setN(i, (i + 1) * 3);
//
//	}
//
//	d.printData(); // 3 6 9 12 15
//
//	d.insert(99); // Base는 insert 함수를 가지지 않음
//
//	d.printData(); // 3 6 9 12 15 99
//}

/* 10-02 */
//#include <iostream>
//class Base {
//	int x;
//public :
//	Base(int x = 0) : x(x) {}
//	virtual void print() const { std::cout << x << std::endl; }
//};
//class Derived : public Base {
//public :
//	int x, y;
//	Derived(int x = 0, int y = 0) : Base(x), x(x), y(y) {}
//	virtual void print() const { std::cout << x << ", " << y << std::endl; }
//	bool operator<(Derived& d) {
//		if (this->x + this->y < d.x + d.y) return true;
//		else return false;
//	}
//};
//int main() {
//	// All data members of Base and Derived classes must be declared 
//
//	// as private access types
//
//	Base* p1 = new Derived(10, 20); // (x, y)
//
//	Base* p2 = new Base(5); // (x) 
//
//	p1->print(); // prints 10, 20
//
//	p1->Base::print(); // prints 10
//
//	p2->print(); // prints 5
//
//	Derived* p3 = dynamic_cast<Derived*>(p1);
//
//	if (p3 != nullptr) p3->print(); // prints 10, 20
//
//	const Base b1 = *p2;
//
//	b1.print(); // prints 5
//
//	Derived d1(1, 3), d2(2, 4);
//
//	Derived d3 = (d1 < d2) ? d1 : d2; // operator <: (d1.x+d1.y) < (d2.x+d2.y)
//
//	d3.print(); // prints 1, 3
//}

/* 10-01 */
//#include <iostream>
//#include <cmath>
//class Shape {
//public:
//	static double PI;
//	virtual double Area() const = 0;		// 면적 계산
//	virtual void Print_Area() const = 0;	// 면적 출력
//};
//double Shape::PI = 3.14159;
//class TwoDimensional : public Shape {
//public:
//	virtual double Span() const = 0;		// 둘레 계산
//	virtual void Print_Span() const = 0;	// 둘레 출력
//}; 
//class ThreeDimensional : public Shape {
//public:
//	virtual double Mass() const = 0;		// 부피 계산
//	virtual void Print_Mass() const = 0;	// 부피 출력
//};
//class Triangle : public TwoDimensional {
//	double x1, x2, x3;
//public :
//	Triangle(double x1 = 0, double x2 = 0, double x3 = 0) : x1(x1), x2(x2), x3(x3) {}
//	double Area() const override { return std::sqrt(((x1 + x2 + x3) / 2)*((x1 + x2 + x3) / 2 -x1)*((x1 + x2 + x3) / 2 - x2)*((x1 + x2 + x3) / 2 -x3)); }
//	void Print_Area() const override { std::cout << Area() << std::endl; }
//	double Span() const override { return x1 + x2 + x3; }
//	void Print_Span() const override { std::cout << Span() << std::endl; }
//};
//class Rectangle : public TwoDimensional {
//	double x, y;
//public :
//	Rectangle(double x = 0, double y = 0) : x(x), y(y) {}
//	double Area() const override { return x * y; }
//	void Print_Area() const override { std::cout << Area() << std::endl; }
//	double Span() const override { return 2*(x+y); }
//	void Print_Span() const override { std::cout << Span() << std::endl; }
//};
//class Circle : public TwoDimensional {
//	double r;
//public :
//	Circle(double r = 0) : r(r) {}
//	double Area() const override { return r * r * PI; }
//	void Print_Area() const override { std::cout << Area() << std::endl; }
//	double Span() const override { return 2*r*PI; }
//	void Print_Span() const override { std::cout << Span() << std::endl; }
//};
//class Cube : public ThreeDimensional {
//	double x, y, z;
//public :
//	Cube(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
//	double Area() const override { return 2 * (x * y + y * z + z * x); }
//	void Print_Area() const override { std::cout << Area() << std::endl; }
//	double Mass() const override { return x * y * z; }
//	void Print_Mass() const override { std::cout << Mass() << std::endl; }
//};
//class Sphere : public ThreeDimensional {
//	double r;
//public :
//	Sphere(double r = 0) : r(r) {}
//	double Area() const override { return 4*PI*r*r; }
//	void Print_Area() const override { std::cout << Area() << std::endl; }
//	double Mass() const override { return 4/3*PI*r*r*r; }
//	void Print_Mass() const override { std::cout << Mass() << std::endl; }
//};
//int main() {
//	Triangle tri(3.0, 4.0, 5.0);
//	Rectangle rec(4.5, 7.5);
//	Circle cir(5.5);
//	Cube cub(3.0, 6.5, 8.0);
//	Sphere sph(9.5);
//	tri.Print_Area();
//	tri.Print_Span();
//	rec.Print_Area();
//	rec.Print_Span();
//	cir.Print_Area();
//	cir.Print_Span();
//	cub.Print_Area();
//	cub.Print_Mass();
//	sph.Print_Area();
//	sph.Print_Mass();
//}