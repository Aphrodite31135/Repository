//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N = 0;
//	cin >> N;
//	vector<int> num(N);
//	for (auto it = num.begin(); it != num.end(); it++) cin >> *it;
//
//	sort(num.begin(), num.end());
//	num.erase(unique(num.begin(), num.end()), num.end());
//
//	// O(N^2)
//	vector<int> s_two_num;
//	for (auto it = num.begin(); it != num.end(); it++)
//		for (auto jt = num.begin(); jt != num.end(); jt++) {
//			s_two_num.push_back(*it + *jt);	// x + y
//		}
//
//	// O(N^2 log N)
//	sort(s_two_num.begin(), s_two_num.end());
//	s_two_num.erase(unique(s_two_num.begin(), s_two_num.end()), s_two_num.end());
//
//	// O(N^2 log N)
//	for (int i=N-1;i>=0;i--) {
//		for (int j = 0; j < N;j++) {
//			int target = num[i] - num[j];
//			auto iter = lower_bound(s_two_num.begin(), s_two_num.end(), target);
//			if (iter != s_two_num.end() && *iter== target) {
//				cout << num[i];
//				return 0;
//			}
//		}
//	}
//}