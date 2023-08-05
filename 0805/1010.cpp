#include <iostream>
using namespace std;

float factorial(int n1, int n2);

int main() {
	int length;
	cin >> length;
	int* num1 = new int[length]();
	int* num2 = new int[length]();
	for (int i = 0;i < length;i++) 
		cin >> num1[i]>> num2[i];
	for (int i = 0;i < length;i++) 
		cout << int(factorial(num2[i], num1[i])+0.5) << endl;
	delete[] num1, num2;
	return 0;
}

float factorial(int n1, int n2)
{
	if (n2 == 1)
		return n1;
	else
		return (double)(n1 / n2) * factorial(n1 - 1, n2 - 1);
}