#include <iostream>
class Divide {
private :
	int s;
	int m;
public :
	Divide(int s = 0, int m = 1) : s(s), m(m) {
		if (m == 0)
			std::cout << "Division Zero Error";
	};
	void Print() {
		std::cout << this->s << " / " << this->m << " ";
	}
	void Multiply(Divide d1, Divide d2) {
		d1.m* d2.m;
		d1.s* d2.s;
	}
};



/* Class */
//#include <iostream>
//#include <string>
//class Test {
//private :
//	int num;
//	Test(int num1, int num2) {};
//public :
//	Test(int num = 0) : num(num) {};
//	void Pop() { std::cout << num << " "; }
//	~ Test() { Pop(); }
//};
//int main() {
//	Test test1 = 10;
//	Test test2{};
//	Test test3{ 5 };
//	// Test test_private(1, 2);
//}

/* Colatz Demonstrating */
//#include<iostream>
//int colatz(int num) {
//	if (num == 1) return 1;
//	if (num % 2==1) return colatz(num * 3 + 1);
//	else return colatz(num / 2);
//}
//int main() {
//	int i = 1;
//	while (true) std::cout << std::boolalpha << i << " : " << bool(colatz(i++)) << std::endl;
//}

/* File Stream */
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//using namespace std;
//int main() {
//	ofstream out("Test.txt");
//	if (out.good()) {
//		for (int i = 0; i < 10; i++)
//			out << i;
//		out.close();
//	}
//	vector<int> num;
//	ifstream in;
//	if (in.good()) {
//		in.open("Test.txt");
//		int value;
//		while (in >> value)
//			num.push_back(value);
//		in.close();
//	}
//	for (int i = 0; i < num.size(); i++)
//		cout << num[i] << " ";
//}

/* Operator */
//#include <iostream>
//#include <string>
//using std::string;
//class Test {
//private :
//	int num1=0;
//public :
//	int operator=(const int& num2) {
//		this->num1 = num2;
//		return this->num1;
//	}
//	int operator+=(const int& num2) {
//		this->num1 = this->num1 * 10 + num2;
//		return this->num1;
//	}
//	int operator-=(const int& num2) {
//		this->num1 = this->num1 / 10;
//		return this->num1;
//	}
//	int Pop() {
//		int num2 = this->num1 % 10;
//		this->num1 / 10;
//		return num2;
//	}
//	void Push(int num2) {
//		this->num1 += num2;
//	}
//	void Print() {
//		std::cout << this->num1;
//	}
//	Test(int num1) {
//		this->num1 = num1;
//	}
//};
//int main() {
//	string word = "good";
//	word += "-bye";
//	word.operator+=("-bye");
//	std::cout << word << std::endl;
//	Test n = 5;
//	n = 8;
//	n += 5;
//	n.Print();
//}