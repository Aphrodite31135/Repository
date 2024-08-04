#include <iostream>

int main() {
	int mid, fin;
	std::cin >> mid >> fin;
	int num = (mid + fin) / 2;
	if (num >= 90) {
		std::cout << "A" << std::endl;
	}
	else if (90 > num >= 80) {
		std::cout << "B" << std::endl;
	}
	else if (80 > num >= 70) {
		std::cout << "C" << std::endl;
	}
	else if(70 > num >= 60) {
		std::cout << "D" << std::endl;
	}
	else if(60 > num) {
		std::cout << "F" << std::endl;
	}
}

//int main() {
//	int x = 10, y = 5, z;
//	(x > y) ? z = 10 : z = 5;
//	cout << z;
//}

//int main() {
//	int x;
//	cin >> x;
//	switch (x / 10) {
//		case 10:
//			cout << "A" << endl;
//			break;
//		case 9:
//			cout << "B" << endl;
//			break;
//		case 8:
//			cout << "C" << endl;
//			break;
//		case 7:
//			cout << "D" << endl;
//			break;
//		default :
//			cout << "F" << endl;
//	}
//}

//#include <iomanip>
//int main() {
//	cout << '\"' + "Different" + '\"' << endl;
//	int x;
//	switch ((int)(bool)(cin >> x)) {  // = switch(static_cast<int>(static_cast<bool>((cin>>x)))
//	case 0:
//		cin.clear();
//		cout << "It's False" << endl;
//	case 1:
//		cin.clear();
//		cout << "It's True" << endl;
//	}
//}

//#include <iomanip>
//int main() {
//	double d1 = 1.11 - 1.10, d2 = 2.11 - 2.10;
//	cout << "d1 = " << d1 << endl;
//	cout << "d2 = " << d2 << endl;
//	if (d1 == d2)
//		cout << "Same" << endl;
//	else
//		cout << "\"Different\"" << endl;
//	cout << "d2 = " << setprecision(20) << d2 << endl;
//	cout << "d1 = " << setprecision(20) << d1 << endl;
//}

//int main() {
//	int x = -10;
//	if (x > 0);
//	else
//		cout << "A";
//}

//int main() {
//	int x = 10;
//	{}
//	if(x > 0)cout<<"Can Print";
//}

//int main() {
//	int x;
//	if (x = !10) // !10 = False, x = False -> Skip
//		cout << "print" << endl;
//}

//int main() {
//	int dividend, divisor;
//	cin >> dividend >> divisor;
//	if (divisor != 0)
//		cout << dividend << '/' << divisor << '=' << dividend / divisor << '\n';
//}
