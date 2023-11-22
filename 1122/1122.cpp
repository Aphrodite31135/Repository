/* dynamic cast - dynamic_cast<type>(expression) */
#include <iostream>
class B {
public :
	int b;
	B() : b(10) {}
	virtual ~B() {}
};
class D : public B {
public :
	int d;
	D() : d(20) {}
	~D() override {}
};
int main() {
	B* p1 = new B;
	D* p2 = dynamic_cast<D*>(p1);	// 실체가 B이므로 D 불가능. 
	if (p2) std::cout << "1: " << p2->d << std::endl;
	D* p3 = new D;
	B* p4 = dynamic_cast<B*>(p3);
	if (p4) std::cout << "2: " << p4->b << std::endl;
	B* p5 = new D;
	D* p6 = dynamic_cast<D*>(p5);
	if (p6) std::cout << "3: " << p6->d << std::endl;
}

/* abstract class  */
//class Shape {
//public :
//	virtual double span() const = 0;
//	virtual double area() const = 0;
//};
//// Shape MyShape;	// illegal in abstract class
//class Ellipse : public Shape {
//protected :
//	double major_radius;
//	double minor_radius;
//public :
//	Ellipse(double major, double minor) : major_radius(major), minor_radius(minor) {};
//	double span() const override {};
//	double area() const override {};
//};
//class Circle : public Ellipse {
//public :
//	Circle(double radius) : Ellipse(radius, radius) {}
//};
//int main() {
//	Circle c1(6);
//}

/* class inheritance with pointer */
//#include <iostream>
//class B {
//public :
//	int x;
//	B(int x) : x(x) {}
//	virtual void Print() const { std::cout << x << std::endl; }	// dynamic dispatch -< polymorphism
//	virtual ~B() { std::cout << "B Deleted" << std::endl; }
//};
//void Print(B* p) { p->Print(); }
//class D : public B {
//public :
//	int x;
//	D(int x1, int x2) : B(x1), x(x2) {}
//	void Print() const override {		// override : virtual overriding
//		B::Print();						// final : final virtual overriding
//		std::cout << x << std::endl;
//	}
//	~D() { std::cout << "D Deleted" << std::endl; }
//};
//int main() {
//	B b1(1);		D d1(10, 20);
//	B* bp1 = &b1;	B* bp2 = &d1;
//	Print(bp1);		Print(bp2);
//	B* p = new D(100, 200);
//	delete p;
//}

/* class inheritance */
//#include <iostream>
//class B {
//// private : int x;	// Error! : Private는 상속은 가능하나 접근은 불가능. 
//public :
//	int x;
//	B(int x) :x(x) {}
//	void Print() const { std::cout << x << std::endl; }
//};
//class D : public B {
//public:
//	int x;
//	D(int x1=0, int x2=0) : B(x), x(x2) {}
//	void Print() const { std::cout << x << std::endl; }
//	// void Print() const { std::cout << B::x << std::endl; }
//};
//int main() {
//	D d1;
//	d1.x = 10;
//	d1.B::x = 5;
//	d1.Print();
//	d1.B::Print();
//}
/* struct inheritance */
//#include <iostream>
//struct B {
//	int x;
//	// B() : x(100) {}		// 정상 동작
//	// B (int x) : x(x) {}	// Error! : B class의 default 생성자를 가져오게 되기 때문.  
//							// 정상 작동 시키기  위해 class D에서 B(x)를 만들어줘야 함. 
//	B(int x) : x{ x } {}
//	void Print() const { std::cout << x << std::endl; }
//};
//struct D : public B {
//	int x;
//	D(int x=0) : B(x-10) {}
//	void Print() const { std::cout << x << std::endl; }
//};
//int main() {
//	D d1;
//	d1.x = 10;
//	d1.B::x = 5;
//	d1.Print();
//	d1.B::Print();
//}

/* 08-03 */
//#include <iostream>
//#include <vector>
//#include <string>
//#include <ostream>
//class Rational {
//public :
//    int x, y;
//    Rational(int x = 0, int y = 1) : x(x), y(y) { }
//    Rational Add(Rational r) { return { this->x * r.y + r.x * this->y, this->y * r.y }; }
//    bool Equal(Rational r) { return true; } // ########## Need To Define GCD ########## //
//};
//std::string NewString(std::string s="") { return s; }
//void Print(Rational r) { std::cout << r.x << ", " << r.y << std::endl; }
//void Print(std::vector<Rational> v) { for (int i = 0; i < v.size(); i++) { Print(v[i]); } }
//Rational Mul(Rational r1, Rational r2) { return { r1.x * r2.x, r1.y * r2.y }; }
//int main() {
//    Rational r1, r2(5), r3(2, 8), r4;
//    Print(r1); // prints 0/1
//    Print(r2); // prints 5/1
//    Print(r3); // prints 1/4
//
//    r4 = Mul(r2, r3); // r4 = r2*r3
//    Print(r4); // prints 5/4
//    r4 = r2.Add(r3); // r4 = r2+r3
//    Print(r4); // prints 21/4
//
//    if (r4.Equal(Rational{ 42, 8 })) std::cout << "Equal" << std::endl;
//
//    std::vector<Rational> v1;
//    v1.push_back({ 1 }); v1.push_back({ 3, 7 });
//    Print(v1); // prints 1/1, 3/7
//
//    std::string s1 = "C++ programming", s2;
//    s2 = NewString(s1); // s2: "***C++ programming***"
//    std::cout << s2 << std::endl; // prints ***C++ programming***
//}