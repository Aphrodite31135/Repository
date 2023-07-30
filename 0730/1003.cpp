#include <iostream>
#include <array>
using namespace std;

int fibonacci(int n);
int count_zero = 0;
int count_one = 0;

int main() {
    int size;
    cin >> size;
    int* num = new int[size];

    for (int i = 0;i < size;i++) {
        pass;
    }

    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        count_zero++;
        return 0;
    }
    else if (n == 1) {
        count_one++;
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}