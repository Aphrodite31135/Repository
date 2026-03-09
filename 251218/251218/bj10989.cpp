#include <iostream>
#include <map>
using namespace std;
int main() {
	int N = 0;
	int num = 0;
	cin >> N;
	map<int, int> count;
	for (int i = 0; i < N; i++) {
		cin >> num;
		count[num]++;
	}
}