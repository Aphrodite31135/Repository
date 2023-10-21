/* 06 - 10 */
#include <iostream>
#include <vector>
#include <ctime>
std::vector<std::vector<int>> Transpose(std::vector<std::vector<int>> v);
void print(std::vector<std::vector<int>> v);
int main() {
	std::vector<std::vector<int>> m1(3, std::vector<int>(2, 0));
	srand((unsigned)time(0));
	for (int i = 0; i < m1.size(); i++) {
		for (int j = 0; j < m1[i].size(); j++)
			m1[i][j] = rand() % 100;
	}
	std::vector<std::vector<int>> m2 = Transpose(m1);
	print(m1);
	print(m2);
}
std::vector<std::vector<int>> Transpose(std::vector<std::vector<int>> v)
{
	std::vector<std::vector<int>> v_temp(2, std::vector<int>(3, 0));
	for (int i = 0; i < v[0].size(); i++) {
		for (int j = 0; j < v.size(); j++)
			v_temp[i][j] = v[j][i];
	}
	return v_temp;
}
void print(std::vector<std::vector<int>> v)
{
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++)
			std::cout << v[i][j] << ",";
		std::cout << std::endl;
	}

}

/* 06 - 09 */
//#include <iostream>
//#include <vector>
//#include <ctime>
//std::vector<int> Reverse(std::vector<int> v);
//void print(std::vector<int> v);
//int main() {
//	std::vector<int> v1;
//	srand((unsigned)time(0));
//	for (int i = 0; i < 5; i++)
//		v1.push_back(rand() % 100);
//	std::vector<int> v2 = Reverse(v1);
//	print(v1);
//	print(v2);
//}
//std::vector<int> Reverse(std::vector<int> v) {
//	std::vector<int> v_temp;
//	for (int i = v.size(); i > 0; i--)
//		v_temp.push_back(v[i - 1]);
//	return v_temp;
//}
//void print(std::vector<int> v) {
//	for (int i = 0; i < v.size(); i++)
//		std::cout << v[i] << ", ";
//	std::cout << std::endl;
//}