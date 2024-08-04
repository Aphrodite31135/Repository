#include <iostream>
int main() {
    int x1 = 10;
    int* p1 = &x1;
    int** pp1 = &p1;

    **pp1 = 11;
    std::cout << x1 << std::endl;
    *p1 = 12;
    std::cout << x1 << std::endl;

    int x2, * p2, ** pp2;
    x2 = 10;
    p2 = &x2;
    pp2 = &p2;

    **pp2 = 11;
    std::cout << x2 << std::endl;
    *p2 = 12;
    std::cout << x2 << std::endl;
}

//#define VEC std::vector<int>
//#define VE std::vector<VEC>
//#include <vector>
//int main() {
//	VEC v1 = { 1,2,3 };
//	VEC v2 = { 4,5,6 };
//	VE v = { v1, v2 };
//
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = 0; j < v[i].size(); j++)
//			std::cout << v[i][j] << " ";
//		std::cout << std::endl;
//	}
//}