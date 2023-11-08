/* vector & array #2 */
//#include <iostream>
//#include <vector>
//#include <array>
//using namespace std;
//int main() {
//	vector<int> vec = { 10, 20, 30 };
//	cout << *vec.begin() << endl;		// 10
//	cout << *(vec.end() - 1) << endl;	// 30
//	int* cursor = &vec[0];
//	int* end = &vec[0] + vec.size();
//	while (cursor != end) {
//		std::cout << *cursor << ' ';
//		cursor++;
//	}
//}

/* vector & array #1 */
//#include <iostream>
//#include <vector>
//#include <array>
//using namespace std;
//int main() {
//	vector<int> v(10);
//	cout << v[0] << endl;
//	array<int, 10> a;
//	cout << a[0] << endl;
//	int arr[10];
//	cout << arr[0] << endl;
//}

/* Command-line Arguments */
//#include <iostream>
//int main(int argc, char *argv[]) {
//	for (int i = 0; i < argc; i++) std::cout << '[' << argv[i] << ']' << std::endl;
//}

/* cstring // delimiter : '\0' */
//int strlen(const char* s);
//char* strcpy(char* s, const char* t);
//int strcmp(const char* s, const char* t);

/* string */
//#include <iostream>
//#include <string>
//int main() {
//	char name[100] = "Programming";
//	name[2] = '\0';
//	// name = "Programming";
//	std::cout << name << std::endl;
//	std::string str;
//	str = "Programming";
//	std::cout << str;
//}

/* string */
//#include <iostream>
//int main() {
//	char name[100] = "Programming";
//	name[2] = '\0';
//	std::cout << name << std::endl;
//}

/* using */
//#include <iostream>
//#include <iomanip>
//const int ROWS = 3, COLUMNS = 5;
//using Matrix = double[ROWS][COLUMNS];
////typedef double Martix[ROWS][COLUMNS];
////void Print_Matrix(const double m[ROWS][COLUMNS])
////const double m[][COLUMNS], const double (*m)[COLUMNS]
//void Print_Matrix(const Matrix m) {
//	for (int row = 0; row < ROWS; row++) {
//		for (int col = 0; col < COLUMNS; col++)
//			std::cout << std::setw(5) << m[row][col];
//		std::cout << std::endl;
//	}
//}
//int main() {
//	double mat[ROWS][COLUMNS] = { {1,2,3,4,5},{11,12,13,14,15}, {21,22,23,24,25} };
//	Print_Matrix(mat);
//}

/* new & delete */
//#include <iostream>
//int main() {
//	double* numbers;
//	int size;
//	std::cin >> size;
//	if (size > 0) {
//		numbers = new double[size];	// numbers = new double;
//		for (int i = 0; i < size; i++) std::cin >> numbers[i];
//		for (int i = 0; i < size; i++) std::cout << numbers[i] << ' ';
//		delete[] numbers;			// delete numbers;
//	}
//}