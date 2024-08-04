/* 11-01 */
#include <iostream>
#include <string>
using namespace std;
template<typename T>
T Average(const T& n1, const T& n2) { return ( n1 + n2 )/2; }
template <>
string Average<string>(const string& c1, const string& c2) {
    string c = c1 + " " + c2;
    string ret = "";
    for (int i = 0; i < c.length() / 2; i++) { ret += c[i]; }
    return ret;
}
int main() {
    std::cout << Average(2.5, 3.3) << std::endl;
    std::cout << Average(2, 3) << std::endl;
    std::cout << Average(std::string("C++"), std::string("Programming")) << std::endl;
}

/* 11-02 */
//#include <iostream>
//#include <string>
//using namespace std;
//template <typename T>
//class Vector {
//public :
//    T n1, n2;
//    Vector(const T& n1, const T& n2) : n1(n1), n2(n2) {}
//};
//template <typename T>
//ostream& operator<< (ostream& os, Vector<T>& v) {
//    os << v.n1 << ", " << v.n2;
//    return os;
//}
//template <>
//ostream& operator<< <char>(ostream& os, Vector<char>& v) {
//    os << int(v.n1) << ", " << int(v.n2);
//    return os;
//}
//int main() {
//    Vector<int> v1(1234, 32644);
//    Vector<char> v2(121, 22);
//    Vector<double> v3(1.32, 2.234);
//    std::cout << v1 << std::endl; // 1234, 32644 출력
//    std::cout << v2 << std::endl; // 121, 22 출력
//    std::cout << v3 << std::endl; // 1.32, 2.234 출력
//}

/* 11-03 */
//#include <iostream>
//#include <vector>
//#include <algorithm>
//struct Data {
//    int x;
//    Data(int x = 0) : x(x) {}
//    ~Data() { std::cout << "Destr.: " << x << std::endl; }
//};
//std::ostream& operator << (std::ostream& os, const Data& d) {
//    os << d.x;
//    return os;
//}
//template <class T>
//class A {
//    std::shared_ptr<T> p;
//public:
//    A(int x = 0) : p(new T(x)) {}
//    T& get() const { return *p; }
//    A copy() {
//        A a(p->x);
//        return a;
//    }
//};
//int main() {
//    A<Data> a1, a2(10), a3(20), a4(30);
//    std::cout << a1.get() << std::endl;
//    std::cout << a2.get() << std::endl;
//    std::cout << a3.get() << std::endl;
//    std::cout << a4.get() << std::endl;
//    a1 = a2.copy();
//    a3 = a4;
//    std::cout << a1.get() << std::endl;
//    std::cout << a2.get() << std::endl;
//    std::cout << a3.get() << std::endl;
//    std::cout << a4.get() << std::endl;
//}
