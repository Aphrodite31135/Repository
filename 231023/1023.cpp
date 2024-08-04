/* 작년 1번 */
//#include <iostream>
//bool Fn1(char c);
//int main() {
//	std::cout << Fn1('A')<<", "<<Fn1('b')<<", "<<Fn1(8);
//}
//bool Fn1(char c) {
//	if ((c >= 65) && (c <= 90)) return true;
//	else return false;
//}

/* */

/*작년 6번 (틀림)*/
//#include <iostream>
//#include <vector>
//#include <ctime>
//std::vector<int> Fn6(const int n);
//void Print(std::vector<int> v);
//int main() {
//	int n;
//	std::cin >> n;
//	Print(Fn6(n));
//}
//std::vector<int> Fn6(const int n)
//{
//	std::vector<int> v(n,-1);
//	srand((unsigned)time(0));
//	for (int i = 0; i < n; i++) {
//		int j, num;
//		do {
//			num = rand() % n;
//			for (j = 0; j < i; j++)
//				if (num == v[j]) break;
//		} while (j<i);
//		v[i] = num;
//	}
//	return v;
//}
//void Print(std::vector<int> v)
//{
//	for (int i = 0; i < v.size(); i++)
//		std::cout << v[i] << " ";
//}

/*작년 7번*/
//#include<iostream>
//#include<ctime>
//#include<vector>
//void Fn7(const int n);
//int main() {
//	int n;
//	std::cin >> n;
//	Fn7(n);
//}
//void Fn7(const int n) {
//	if (n != 0) {
//		Fn7(n / 2);
//		std::cout << n % 2;
//	}
//}

/*열의 개수가 무작위인 vector transpose 하기*/
//#include <iostream>
//#include <ctime>
//#include <vector>
//int main() {
//	srand((unsigned)time(0));
//	std::vector<std::vector<int>> v(rand() % 5 + 5, std::vector<int>(rand()%3+3));
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = 0; j < v[i].size(); j++) {
//			v[i][j] = rand() % 49;
//		}
//	}
//}

/*10번 문제*/
//#include <iostream>
//#include <vector>
//#include <ctime>
//std::vector<std::vector<int>> Transpose(std::vector<std::vector<int>> v);
//void print(std::vector<std::vector<int>> v);
//int main() {
//	std::vector<std::vector<int>> m1(3, std::vector<int>(2, 0));
//	srand((unsigned)time(0));
//	for (int i = 0; i < m1.size(); i++) {
//		for (int j = 0; j < m1[i].size(); j++)
//			m1[i][j] = rand() % 100;
//	}
//	std::vector<std::vector<int>> m2 = Transpose(m1);
//	print(m1);
//	print(m2);
//}
//std::vector<std::vector<int>> Transpose(std::vector<std::vector<int>> v)
//{
//	std::vector<std::vector<int>> v_temp(2, std::vector<int>(3, 0));
//	for (int i = 0; i < v[0].size(); i++) {
//		for (int j = 0; j < v.size(); j++)
//			v_temp[i][j] = v[j][i];
//	}
//	return v_temp;
//}
//void print(std::vector<std::vector<int>> v)
//{
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = 0; j < v[i].size(); j++)
//			std::cout << v[i][j] << " ";
//		std::cout << std::endl;
//	}
//
//}