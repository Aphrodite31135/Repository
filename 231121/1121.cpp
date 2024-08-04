/* 09-07 */
#include <iostream>
#include <vector>
#include <string>
#include <ostream>
using std::vector;
using std::string;
using std::ostream;
class BigUnsigned {
public:
	vector<int> num = {};
	BigUnsigned() { this->num = {0}; }
	BigUnsigned(unsigned int num) {
		do {
			this->num.push_back(num % 10);
			num /= 10;
		} while (num!=0);
	}
	BigUnsigned(string s) {
		for (int i = 0; i < s.length(); i++)
			this->num.push_back(int(s[s.length()-1-i])-48);
	}
	BigUnsigned operator+(BigUnsigned n) {
		BigUnsigned k;
		vector<int> result = {};
		int size;
		if (this->num.size() > n.num.size()) {
			size = this->num.size();
			for (int i=n.num.size();i<=size;i++) n.num.push_back(0);
		} else {
			size = n.num.size();
			for (int i = this->num.size(); i <= size; i++)
				this->num.push_back(0);
		}
		int j = 0;
		for (int i = 0; i < size; i++) {
			if (this->num[i] + n.num[i] + j > 9) {
				result.push_back((this->num[i] + n.num[i] + j) % 10);
				j = 1;
			} else { 
				result.push_back(this->num[i] + n.num[i] + j); 
				j = 0;
			}
		}
		if (j == 1) result.push_back(1);
		k.num = result;
		return k;
	}	
};
ostream& operator<<(ostream& oS, BigUnsigned v) {
	string s = "";
	int size = v.num.size();
	for (int i = 0; i < size; i++) {
		if (v.num.back() == 0) { v.num.pop_back(); continue; }
		s.append(std::to_string(v.num.back()));
		v.num.pop_back();
	}
	std::cout << s; 
	return oS;
}
int main() {
	BigUnsigned n1;
	BigUnsigned n2 = BigUnsigned(12345);
	BigUnsigned n3 = BigUnsigned("2345678");
	n1 = n2 + n3;
	std::cout << n2 << std::endl;
	std::cout << n1;
}

/* 09-04 */
//#include <iostream>
//class Person {
//private :
//	int age = 0;
//public :
//	static int PeopleCount;
//	Person(int age = 0) : age(age) { PeopleCount++; }
//	void SetAge(int num) { 
//		this->age = num; 
//	}
//	void ShowAge() { std::cout << this->age << std::endl; }
//	static void ShowPersonCount() { std::cout << PeopleCount; }
//};
//int Person::PeopleCount = 0;
//int main() {
//	Person A;
//	Person B(10);
//	B.ShowAge();
//	Person::ShowPersonCount();
//}

/* 09-03 */
//#include <iostream>
//class A {
//	int x;
//public:
//	A(int x) : x(x) {}
//	// GetX, Max 함수 작성
//	int GetX() const { return this->x; }
//	A* Max(A* a) { return (a->x > this->x) ? a : this; }
//};
//int main() {
//	const A a1(10);
//	A a2(5), a3(3);
//	std::cout << a1.GetX() << std::endl; // 10 출력
//	std::cout << a2.GetX() << std::endl; // 5 출력
//
//	A* p = a2.Max(&a3); // Max: a2.x와 a3.x를 비교하여 
//	// 큰 값을 가지는 인스턴스 주소 반환
//	std::cout << p->GetX() << std::endl; // 5출력
//}

/* 09-02 */
//#include <iostream>
//#include <string>
//class Vector2D {
//	int x, y;
//public:
//	Vector2D(int x, int y) : x(x), y(y) {}
//	std::string operator+ (Vector2D c) {
//		return { std::to_string(this->x + c.x) + ", " + std::to_string(this->y + c.y) };
//	}
//};
//int main() {
//	Vector2D v1(10, 2), v2(20, 5);
//	std::cout << v1 + v2 << std::endl; // 30, 7 출력
//}