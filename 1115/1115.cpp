/* Point class Default 생성자 O, Account class Default 생성자 X*/

/* 과제 08-3 */
#include <iostream>
#include <vector>
#include <string>
class Rational {
public :
    int x = 0;
    int y = 0;
    Rational(int x = 0, int y = 1) : x(x), y(y) { }
    Rational Add(Rational& a) { return { a.x + this->x, a.y + this->y }; }
    bool Equal(const Rational& r) { return (this->x = r.x) && (this->y = r.y); }
    static int gcd(int x, int y) {
        if(y == 0) return x;
        else return gcd(y, x % y);
    }
    static int lcm(int x, int y) {

    }
};
// 미완
void Print(Rational& r) {
    for (int i = 1; i < r.y; i++) {
        if (true);
    }
}
Rational Mul(Rational& a, Rational& b) { return { a.x * b.x, a.y * b.y }; }
int main() {
    Rational r1, r2(5), r3(2, 8), r4;
    Print(r1); // prints 0/1
    Print(r2); // prints 5/1
    Print(r3); // prints 1/4

    r4 = Mul(r2, r3); // r4 = r2*r3
    Print(r4); // prints 5/4
    r4 = r2.Add(r3); // r4 = r2+r3
    Print(r4); // prints 21/4

    if (r4.Equal(Rational{ 42, 8 })) std::cout << "Equal" << std::endl;

    std::vector<Rational> v1;
    v1.push_back({ 1 }); v1.push_back({ 3, 7 });
    Print(v1); // prints 1/1, 3/7

    std::string s1 = "C++ programming", s2;
    s2 = NewString(s1); // s2: "***C++ programming***"
    std::cout << s2 << std::endl; // prints ***C++ programming***
}

/* 과제 08 -2 */
//#include <iostream>
//class IntPoint {
//public:
//    int x; // x 좌표
//    int y; // y 좌표
//    IntPoint(int x, int y) : x(x), y(y) {}
//};
//class Rectangle {
//    IntPoint corner; // 직사각형의 왼쪽-아래 코너점
//    int width; // 직사각형의 폭
//    int height; // 직시각형의 높이
//public:
//    Rectangle(IntPoint pt, int w, int h) : corner(pt),
//        width((w < 0) ? 0 : w), height((h < 0) ? 0 : h) {}
//    int perimeter() {
//        return 2 * width + 2 * height;
//    }
//    int area() {
//        return width * height;
//    }
//    int get_width() {
//        return width;
//    }
//    int get_height() {
//        return height;
//    }
//    // 현재 인스턴스 사각형과 r이 겹쳐있다면 true, 그렇지 않으며 false
//    bool intersect(Rectangle r) {
//        // 코드 작성
//        if (this->corner.x >= r.corner.x) { if (r.corner.x + r.width < this->corner.x) return false; }
//        else { if (this->corner.x + this->width < r.corner.x) return false; }
//        if (this->corner.y - r.corner.y >= 0) { if (r.corner.y + r.height < this->corner.y) return false; }
//        else { if (this->corner.y + this->height < r.corner.y) return false; }
//        return true;
//    }
//    // 대각선의 길이(int 형)를 반환
//    int diagonal() {
//        // 코드 작성
//        return std::sqrt(this->width* this->width + this->height * this->height);
//    }
//    // 사각형의 중심점의 좌표를 IntPoint 형으로 반환
//    IntPoint center() {
//        // 코드 작성
//        return {this->corner.x + this->width / 2, this->corner.y + this->height / 2};
//    }
//    // 현재 인스턴스 사각형의 내부(경계포함)에 pt가 있으면 true,
//    // 그렇지 않으면 false
//    bool is_inside(IntPoint pt) {
//        // 코드 작성
//        if (this->corner.x > pt.x) { return false; }
//        else if (this->corner.x + this->width < pt.x) { return false; }
//        if (this->corner.y > pt.y) { return false; }
//        else if (this->corner.y + this->height < pt.y) { return false; }
//        return true;
//    }
//};
//int main() {
//    Rectangle R1{ {1, 4}, 3, 4 };
//    Rectangle R2{ {3,7}, 2,1 };
//    Rectangle R3{ {5,9 }, 1,1 };
//    std::cout << "R1 대각선 길이: " << R1.diagonal() << std::endl;
//    std::cout << "R2 대각선 길이: " << R2.diagonal() << std::endl;
//    std::cout << "R3 대각선 길이: " << R3.diagonal() << std::endl;
//    std::cout << std::boolalpha << "R1과 R2 겹쳐짐 여부: " << R1.intersect(R2) << std::endl;
//    std::cout << std::boolalpha << "R1과 R3 겹쳐짐 여부: " << R1.intersect(R3) << std::endl;
//    std::cout << "R1의 중심점: " << R1.center().x << ", " << R1.center().y << std::endl;
//    std::cout << "R2의 중심점: " << R2.center().x << ", " << R2.center().y << std::endl;
//    std::cout << "R3의 중심점: " << R3.center().x << ", " << R2.center().y << std::endl;
//    std::cout << std::boolalpha << "R1안에 점이 있는지 여부: " << R1.is_inside({ 3,4 }) << std::endl;
//}

/* 수업 */
//#include <iostream>
//#include <string>
//
//class Ex {
//public :
//	int x;
//	Ex(int x = 0) : x(x) { }
//	void Print() const { std::cout << x << std::endl; }
//	void Print() { std::cout << ++x << std::endl; }
//};
//int main() {
//	Ex e1;
//	e1.x = 10;
//	e1.Print();
//	const Ex e2;
//	// e2.x = 20;
//	e2.Print(); // Print()가 const형이어야 가능함. 
//	Ex* p = new Ex;
//	(*p).x = 20;
//	p->x = 30;
//}