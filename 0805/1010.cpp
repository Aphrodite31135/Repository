#include <iostream>
using namespace std;

long double factorial(int n1, int n2);
// long long factorial(int n1, int n2);

int main() {
	int length;
	cin >> length;
	int* num1 = new int[length]();
	int* num2 = new int[length]();
	for (int i = 0;i < length;i++) 
		cin >> num1[i]>> num2[i];
	for (int i = 0;i < length;i++) 
		cout << long(factorial(num2[i], num1[i]))<< endl;
	delete[] num1, num2;
	return 0;
}

long double factorial(int n1, int n2)
{
	if (n2 == 1)
		return n1;
	else
		return (double)(n1) / n2 * factorial(n1 - 1, n2 - 1);
}

/*
long long factorial(int n1, int n2) {
	if (n2 == 1)
		return n1;
	else
		return n1 * factorial(n1 - 1, n2 - 1);
}
*/