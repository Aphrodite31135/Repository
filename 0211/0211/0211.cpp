#include <iostream>

int main() {

	return 0;
}

//#include <iostream>
//
//void MyFunc(void) {
//	std::cout << "MyFunc(void) called" << std::endl;
//}
//
//void MyFunc(char c) {
//	std::cout << "MyFunc(char c) called" << std::endl;
//}
//
//void MyFunc(int a, int b) {
//	std::cout << "MyFunc(int a, int b) called" << std::endl;
//}
//
//int main() {
//	MyFunc();
//	MyFunc('A');
//	MyFunc(12, 13);
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	int num;
//
//	while (1) {
//		std::cout << "판매 금액을 만원 단위로 입력 (-1 to end) : ";
//		std::cin >> num;
//		if (num == -1) {
//			std::cout << "프로그램을 종료합니다. ";
//			break;
//		}
//		std::cout << "이번 달 급여 : " << num * 0.12 + 50 << "만원"<<std::endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	int num;
//
//	std::cout << "출력할 단: ";
//	std::cin >> num;
//
//	for (int i = 1; i < 10; i++) {
//		std::cout << num << " x " << i << " = " << num * i << std::endl;
//	}
//	
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	char name[10];
//	char tellnum[13];
//
//	std::cout << "이름 : ";
//	std::cin >> name;
//
//	std::cout << "전화번호 : ";
//	std::cin >> tellnum;
//
//	std::cout << "이름 : " << name << std::endl << "전화번호 : " << tellnum << std::endl;
//
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	int num = 0, sum = 0;
//	for (int i = 0; i < 5; i++) {
//		std::cout << i << "번째 정수 입력 : ";
//		std::cin >> num;
//		sum += num;
//	}
//	std::cout << "합계: " << sum;
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	
//	char name[100];
//	char lang[200];
//
//	std::cout << "이름은 무엇입니까? ";
//	std::cin >> name;
//
//	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
//	std::cin >> lang;
//
//	std::cout << "내 이름은 " << name << "입니다. \n";
//	std::cout << "제일 좋아하는 언어는 " << lang << "입니다. \n";
//
//	return 0;
//}