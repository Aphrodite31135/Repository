/* Catching Exceptions */
//#include <iostream>
//using namespace std;
//int main() {
//	int input = 0, sum = 0;
//	cin.exceptions(istream::badbit | istream::failbit);
//	std::cout << "Please enter integer to sum, 999 ends list: ";
//	while (input != 999) {
//		try {
//			cin >> input;
//			if (input != 999) sum += input;
//		}
//		catch (exception& e) {
//			cout << "****Non-integer input detected\n";
//			cin.clear(); // cout << e.what() << '\n';
//			cin.ignore(
//				numeric_limits<streamsize>::max(), '\n');
//		}
//	}
//	cout << sum;
//}

/* tryNcatch */
//#include <iostream>
//#include <vector>
//int main() {
//	std::vector<double> nums{ 1.0, 2.0, 3.0 };
//	int input;
//	std::cout << "Enter an index: ";
//	std::cin >> input;
//
//	try { std::cout << nums.at(input) << '\n'; }
//	catch (std::exception& e) { std::cout << e.what() << '\n'; }
//}

/* Lambda Function 05 */
//#include <iostream>
//#include <functional>
//std::function<double(double)> derivative (std::function<double(double)> f, double h) {
//	return [f, h](double x) {return (f(x + h) - f(x)) / h; }; 
//}
//double func1(double x) { return 3 * x * x + 2 * x + 5; }
//double func2(double x) { return 3 * x + 5; }
//int main() {
//	double h = 0.00001;
//	auto der0 = derivative(func1, h);
//	std::cout << der0(5.) << '\n';
//	auto der1 = derivative(func2, h);
//	std::cout << der1(5.) << '\n';
//}

/* Lambda Function 03 */
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	int sum = 0;
//	vector<int> vec{ 5,22,6,-3,8,4 };
//	for_each(vec.begin(), vec.end(), [&sum](int x) { sum += x; });
//	std::cout << sum;
//}

/* Lambda Function 01 */
//#include <iostream>
//#include <algorithm>
//int main() {
//	auto f = [](int x) { return !(x % 2); };
//	std::cout << f(1) << f(0) << [](int x) { return !(x % 2); } (10);
//}

/*             Object-Oriented Programming, Midterm exam (2023-2, CSE103-00)                       */
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>


// 답안 함수 작성 영역

void Print(const std::vector<int>& v) {
	for (auto x : v)
		std::cout << x << ", ";
	std::cout << std::endl;
}

void Print(const std::vector<std::vector<int>>& v) {
	for (auto row : v) {
		for (auto x : row)
			std::cout << x << ", ";
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int Ex1(int num1, int num2) {
	if (num1 > num2) return 1;
	else if (num1 < num2) return -1;
	else return 0;
}

void Ex2(const int num1, const int num2, int& sum1, int* sum2) {
	sum1 = 0;
	*sum2 = 0;
	for (int i = num1; i <= num2; i++) {
		if (i % 2 == 0) sum1 += i;
		else *sum2 += i;
	}
}

double Ex3(double num) {
	double sum = 1;
	int i = 2;
	while (1) {
		double calcul = 1;
		for (int j = 0; j < i; j++) {
			calcul *= num;
		}
		int factorial = 1;
		for (int k = 2; k <= i; ++k) factorial *= k;
		calcul = calcul / factorial;
		if (calcul <= 1.e-15) break;
		if (i % 4 == 2) sum -= calcul;
		else sum += calcul;
		i += 2;
	}
	return sum;
}

int Ex4(long long n1, long long n2, int n3 = 0) {
	long long sum = 1;
	for (int i = 1; i <= 8; i++) sum *= 2;
	if (n3 == 0) n1 = n1 << 8;
	else n2 = n2 << 8;
	sum = n1 + n2;
	return sum;
}

std::vector<int> Ex5(std::vector<int> v) {
	std::vector<int> ret;
	for (int i = 0; i < v.size(); i++) if (v[i] > 0) ret.push_back(v[i] % 10);
	return ret;
}

std::vector<std::vector<int>> Ex6(std::vector<std::vector<int>>& v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			v[i][j] *= -1;
		}
	}
	return v;
}

std::vector<int> Ex7(std::vector<std::vector<int>> v) {
	std::vector<int> ret;
	for (int i = 0; i < v.size(); i++) {
		int max = v[i][0];
		for (int j = 1; j < v[i].size(); j++) if (v[i][j] > max) max = v[i][j];
		ret.push_back(max);
	}
	return ret;
}

void Ex8(int n) {
	if (n != 0)
	{
		int num = n % 16;
		Ex8(n / 16);
		switch (num) {
		case 10:
			Ex8(n / 16);
			std::cout << 'A';
			break;
		case 11:
			std::cout << 'B';
			break;
		case 12:
			std::cout << 'C';
			break;
		case 13:
			std::cout << 'D';
			break;
		case 14:
			std::cout << 'E';
			break;
		case 15:
			std::cout << 'F';
			break;
		default:
			std::cout << num;
		}
	}
}

int main() {
	// 전역 변수 및 static 변수 사용 금지
	// 채점 기준:	1. 실행되지 않으면 0점 처리
	//				2. 주어진 제한 조건을 위반하면 0점 처리
	//				3. 문제(main 함수의 내용)를 수정하면 0점 처리
	//				4. 일반적인 동작이 불가능한 경우 0점 처리 또는 감점(일반적인 입력에 대한 처리 등)
	//				5. 연산자의 사용이 부정확한 경우 감점(예, &&를 사용할 위치에 &를 사용 등)
	//				6. 필요없는 파라메터나 반환이 있으면 감점
	//				7. 답안지에 코드 동작에 대한 설명이 없으면 0점 처리

	// 1. 아래 코드에서 첫 번째 인수가 두 번째 인수보다 크면 1을, 작으면 -1을, 같으면 0이 출력되도록 Ex1 함수를 정의하라.
	// 표준함수를 사용할 수 없으며, 두 개의 조건 연산자(conditional operator)만을 사용한다.	
	std::cout << "\n### 1 ###" << std::endl;
	std::cout << Ex1(1, 3) << ", " << Ex1(1, -3) << ", " << Ex1(7, 7) << ", " << Ex1(9, 2) << ", " << std::endl;
	// 출력: -1, 1, 0, 1,

	// 2. 아래의 코드에서 앞의 두 인수(정수)의 범위의 짝수의 합과 홀수의 합이 출력되도록 Ex2 함수를 정의하라.
	// 표준함수를 사용할 수 없다. 
	// [첫 번째 인수, 두 번째 인수]
	std::cout << "\n### 2 ###" << std::endl;
	int sum1 = 0, sum2 = 0;
	Ex2(7, 10, sum1, &sum2);
	std::cout << "(" << sum1 << ", " << sum2 << "), "; // 출력: (18, 16),
	Ex2(10, 15, sum1, &sum2);
	std::cout << "(" << sum1 << ", " << sum2 << "), "; // 출력: (36, 39),
	Ex2(-4, 2, sum1, &sum2);
	std::cout << "(" << sum1 << ", " << sum2 << "), "; // 출력: (-4, -3)
	Ex2(4, 2, sum1, &sum2);
	std::cout << "(" << sum1 << ", " << sum2 << ")" << std::endl;; // [4,2] 범위의 정수가 없으므로 모두 0, 출력: (0, 0)

	// 3. 아래의 코드에서 인수의 cosine값이 출력되도록 Ex3 함수를 정의하라.
	// fabs 함수를 제외한 표준함수 및 추가 사용자 함수를 사용할 수 없다.
	// cosine(x) = 1 - (x*x/2!) + (x*x*x*x/4!) - (x*x*x*x*x*x/6!) + ...의 수식을 사용하며, 더해주는 항의 절댓값이 1.E-15보다 클때까지 계산한다.
	// 힌트 1: 분자, 분모를 구분하여 계산, 누적 계산
	// 힌트 2: sign * = -1을 이용하여 덧샘항의 부호 판별
	std::cout << "\n### 3 ###" << std::endl;
	std::cout << Ex3(30 * 3.14159 / 180.) << ", " << Ex3(60 * 3.14159 / 180.) << ", " << Ex3(90 * 3.14159 / 180.) << ", " << Ex3(180 * 3.14159 / 180.) << std::endl;
	std::cout << cos(30 * 3.14159 / 180.) << ", " << cos(60 * 3.14159 / 180.) << ", " << cos(90 * 3.14159 / 180.) << ", " << cos(180 * 3.14159 / 180.) << std::endl;
	// 출력:	0.866026, 0.500001, 1.32679e-06, -1
	//		0.866026, 0.500001, 1.32679e-06, -1

	// 4. 아래의 코드에서 앞의 두 인수(양의 정수, [0, 0xFF] 범위)를 비트 단위 연산자(bitwise operator)를 이용하여 비트 단위로 연결하여 아래와 같이 출력되도록 Ex4 함수 한 개를 정의하라.
	// 세 번째 인수가 없거나 0이면 첫 번째 인수가 상위 16-9비트로 되어 결합되며, 0이 아니면 두 번째 인수가 상위 16-9비트로 결합된다.
	// 표준함수는 사용할 수 없다.
	// Function overloading을 사용할 수 없다.
	// std::hex와 std::dec는 각각 16진수 출력과 10진수 출력을 지정한다. 
	std::cout << "\n### 4 ###" << std::endl;
	std::cout << std::hex << Ex4(0xF1, 0x9A) << ", " << Ex4(0xF1, 0x9A, 1) << ", " << Ex4(0xF1, 0x9A, 0) << std::dec << std::endl;
	// 출력: f19a, 9af1, f19a
	// 힌트: (0xF1, 0x9A) -> (0xF100, 0x9A) -> 0xF19A

	// 5. 아래의 코드에서 인수로 전달된 벡터(std::vector<int>)의 요소가 양수인 경우에만 1의 자리 값이 출력되도록 Ex5 함수를 정의하라.
	// Function overloading을 사용할 수 없다.
	std::cout << "\n### 5 ###" << std::endl;
	std::vector<int> v1{ 10, 3, 0, -2, -30 }, v2;
	v2 = Ex5(v1);
	Print(v2);	// 출력: 0, 3, 
	v2 = Ex5(std::vector<int>{1, 23, -4, -32, 79});
	Print(v2);	// 출력: 1, 3, 9, 


	// 6. 아래의 코드에서 인수로 전달된 2차원 벡터(std::vector<std::vector<int>>)의 2차원 요소(int)의 부호가 변경되어 출력되도록 Ex6함수를 정의하라.
	// 표준함수를 사용할 수 없다.
	std::cout << "\n### 6 ###" << std::endl;
	std::vector<std::vector<int>> v3{ {1, 2, 3, -1, 7}, {9, -4, 2}, {3, -2, 9} };
	Ex6(v3);
	Print(v3);
	// 출력:	-1, -2, -3, 1, -7,
	//		-9, 4, -2,
	//		-3, 2, -9,

	// 7. 아래의 코드에서 인수로 전달된 2차원 벡터(std::vector<std::vector<int>>)의 요소(std::vector<int>)의 최대 요소(int)가 출력되도록 Ex7 함수를 정의하라.
	std::cout << "\n### 7 ###" << std::endl;
	const std::vector<std::vector<int>> v4{ {1, 2, 3, -1, 7}, {19, -4, 2}, {3, -2, 7} };
	std::vector<int> v5;
	v5 = Ex7(v4);
	Print(v5);
	// {1, 2, 3, -1, 7}의 최댓값 7, {19, -4, 2}의 최댓값 19, {3, -2, 7}의 최댓값 7이 출력됨, 출력: 7, 19, 7,

	// 8). 아래 코드에서 인수를 16진수로 출력하는 Ex8 함수를 recursive call을 이용하여 정의하라.(가능한 효율적이고 간단하게 작성, 음수는 고려하지 않음)
	// 표준함수를 사용할 수 없다.
	// 힌트 1: 27 -> 27%16 = 11(B), 27/16 = 1
	// 힌트 2: (char)('A' + 2) -> 'C'
	std::cout << "\n### 8 ###" << std::endl;
	Ex8(27);		// 출력: 1B
	std::cout << std::endl;
	Ex8(0x1F3);		// 출력: 1F3
	std::cout << std::endl;
}