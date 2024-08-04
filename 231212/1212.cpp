/* 1. 아래 C++ 코드의 출력을 확인하고, 동작을 설명하시오. */
#include <iostream>
#include <vector>
#include <list>
int main() {
	std::vector<int> v{ 10, 20, 30, 40, 50 }; // vector v = {10, 20, 30, 40, 50}
	std::list<int> l{ 1, 2, 3, 4, 5 };		  // list l = {1, 2, 3, 4, 5}
	for (std::vector<int>::iterator iter = std::begin(v); iter != std::end(v); iter++) 
	// iterator iter이 begin ~ end-1에서 증가하며, 정보를 가리킴
		std::cout << *iter << ", ";	// iter가 가리키는 정보를 출력
	std::cout << std::endl;
	for (auto iter = std::begin(v); iter != std::end(v); iter++) 
	// auto iter이 위와 같은 동작을 함. begin(v), end(v)로 동작
		std::cout << *iter << ", "; // iter가 가리키는 정보를 출력
	std::cout << std::endl;
	for (auto iter = v.begin(); iter != v.end(); iter++) 
	// auto iter이 위와 같은 동작을 함. v.begin(), v.end()로 동작
		std::cout << *iter << ", "; // iter가 가리키는 정보를 출력
	std::cout << std::endl;
	for (std::vector<int>::reverse_iterator iter = v.rbegin(); iter != v.rend(); iter++) 
	// 역방향 iterator iter이 rbegin(마지막) ~ rend(처음)-1에서 역방향 증가하며, 정보를 가리킴
		std::cout << *iter << ", "; // iter가 가리키는 정보 출력
	std::cout << std::endl;
	for (auto iter = v.rbegin(); iter != v.rend(); iter++) 
	// auto iter이 위와 같은 동작을 함. v.rbegin(), v.rend()로 동작
		std::cout << *iter << ", "; // iter가 가리키는 정보 출력
	std::cout << std::endl;
	for (auto iter = std::begin(l); iter != std::end(l); iter++) 
	// auto iter이 begin ~ end-1에서 증가하며, 정보를 가리킴
		std::cout << *iter << ", "; // iter가 가리키는 정보 출력
	std::cout << std::endl;
	for (auto iter = l.begin(); iter != l.end(); iter++) 
	// auto iter이 위와 같은 동작을 함. l.begin(), l.end()로 동작
		std::cout << *iter << ", "; // iter가 가리키는 정보 출력
	std::cout << std::endl;
	for (auto iter = l.rbegin(); iter != l.rend(); iter++) 
	// auto iter이 rbegin(마지막) ~ rend(처음)-1에서 역방향 증가하며, 정보를 가리킴
		std::cout << *iter << ", "; //iter가 가리키는 정보 출력
	std::cout << std::endl;
}

/* 2. 아래 C++ 코드의 출력을 확인하고, 동작을 설명하시오. */
//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//template <class container> // class 템플릿
//void Print(container c) { // 특정 class c를 불러옴
//	for (auto iter = c.begin(); iter != c.end(); iter++) // auto iter이 begin ~ end-1에서 증가하며, 정보를 가리킴
//		std::cout << *iter << ", "; // iter가 가리키는 정보 출력
//	std::cout << std::endl;
//}
//int main() {
//	std::vector<int> v1{ 10, 20, 30, 40, 50 }; // vector v1 = {10, 20, 30, 40, 50}
//	Print(v1);
//	v1.erase(v1.begin() + 3); // v1.begin()이 v1[0]을 가리키므로 v1.begin()+3 (= v1[4])을 소거함
//	Print(v1);
//	v1.erase(v1.begin() + 2, v1.end()); // v1.begin()+2 ~ v1.end()를 소거하므로 v1[3] ~ v1[4]를 소거함
//	Print(v1);
//	std::cout << std::endl;
//	std::vector<int> v2{ 10, 0, 30, 0, 50 }; // vector v2 = {10, 0, 30, 50}
//	Print(v2);
//	auto remove_start = std::remove(v2.begin(), v2.end(), 0); 
//	// remove()를 활용하여 값이 0인 것을 찾아 벡터의 끝으로 옮김 (vector 크기 변화 X)
//	Print(v2);
//	v2.erase(remove_start, v2.end()); // 이후 remove_start를 활용하여 remove()로 지우지 못했던 값들을 erase()로 소거함
//	Print(v2);
//	std::cout << std::endl;
//	std::vector<int> v3{ 10, 0, 30, 0, 50 }; // vector v3 = {10, 0, 30, 0, 50}
//	Print(v3);
//	v3.erase(std::remove(v3.begin(), v3.end(), 0), v3.end()); 
//	// remove()를 활용하여 begin() ~ end()에서 값이 0인 것을 벡터의 끝으로 옮긴 뒤, erase()를 활용하여 해당 부분을 소거함
//	Print(v3);
//	std::cout << std::endl;
//	std::vector<int> l{ 10, 0, 30, 0, 50 }; // vector l = {10, 0, 30, 0, 50}
//	Print(l);
//	l.erase(std::remove(l.begin(), l.end(), 0), l.end()); 
//	// l.begin() ~ l.end()에서 값이 0인 것을 벡터의 끝으로 옮긴 뒤, erase()를 활용하여 해당 부분을 소거함
//	Print(l);
//}

/* 3. 아래 C++ 코드의 출력을 확인하고, 동작을 설명하시오. */
//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <numeric>
//template <class iterator> // class 템플릿
//void Print(iterator begin, iterator end) { 
//	for (iterator iter = begin; iter != end; iter++) std::cout << *iter << ", "; 
//// iter begin, end를 받아와 begin이 end가 아닐 때, iterator iter가 증가하며 해당 정보를 가리킴
//	std::cout << std::endl;
//}
//int main() {
//	std::vector<int> v1{ 10, 20, 30, 40, 50 }; // vector v1 {10, 20, 30, 40, 50}
//	Print(v1.begin(), v1.end());
//	Print(v1.begin(), v1.end() - 2);
//	int sum = std::accumulate(v1.begin(), v1.end(), 0); // v1.begin(= v1[0]) ~ v1.end(= v1[4])에서 누적한 값을 sum에 저장
//	std::cout << sum << std::endl; // sum 출력
//	sum = std::accumulate(v1.begin(), v1.end() - 2, 0); // v1.begin(= v1[0]) ~ v1.end-2(= v1[2])에서 누적한 값을 sum에 저장
//	std::cout << sum << std::endl; // sum 출력
//}