
/* stdlib */
#include <iostream>
#include <vector>
#include <algorithm>
template <class T>
bool is_even(T n) { return n % 2 == 0; }
int main() {
	std::vector<int> seq = { 2,3,4,5,6,7,8,9,3,11,12 };
	// seq.erase(std::remove_if(seq.begin(), seq.end(), is_even<int>), seq.end());
	// seq.erase(std::remove_if(seq.begin(), seq.end(), [](int x) { if (x % 2 != 0) return x; }), seq.end());
	seq.erase(std::remove_if(seq.begin(), seq.end(), [](int x) mutable -> bool { return !(x%2); }), seq.end());
	for (auto x : seq) std::cout << x << " ";
}

/* 구분문자 공백으로 설정하기 */
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	vector<int> vec{ 10,20,30,35,40,45,50,55 };
//	auto strm = ostream_iterator<int>(cout, " ");
//	copy(begin(vec), end(vec), strm);
//	std::cout << endl;
//}

/* standard library 01*/
//#include <iostream>
//#include <algorithm>
//#include <vector>
//template <class T>
//bool is_even(T n) {
//	return n % 2 == 0;
//}
//int main() {
//	std::vector<int> seq{ 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int even_count = std::count_if(std::begin(seq), std::end(seq), is_even<int>);
//}

/* iterator */
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct To {
//	char operator() (char ch) {
//		if (ch >= 'a' && ch <= 'z') ch += 'A' - 'a';
//		ch++;
//		if (ch == 'Z' + 1) ch = 'A';
//		return ch;
//	}
//};
//int main() {
//	string name = "Fzsd";
//	transform(begin(name), end(name), begin(name), To());
//	cout << name << endl;
//}
