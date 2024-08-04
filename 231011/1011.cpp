#include <iostream>
int main() {
	int num = 1;
	for (int i = 0; i < 50; i++) {
		if (i == 49) {
			std::cout << num;
			break;
		}
		std::cout << num << ", ";
		num += 3;
	}
}