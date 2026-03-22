/* 1463 */
//#include <bits/stdc++.h>
//using namespace std;
//
//int lst[1000006];
//int n;
//
//int main() {
//	cin >> n;
//	for (int i = 2; i <= n; i++) {	// O(N)
//		lst[i] = lst[i - 1] + 1;
//		if (i % 2 == 0) lst[i] = min(lst[i], lst[i / 2] + 1);
//		if (i % 3 == 0) lst[i] = min(lst[i], lst[i / 3] + 1);
//	}
//	cout << lst[n];
//	return 0;
//}

/* 9095 */
//#include <bits/stdc++.h>
//using namespace std;
//int T, n[11], lst[11], temp, MAX_NUM=-1;
//int main() {
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		cin >> temp;
//		n[i] = temp;
//		if (temp > MAX_NUM) MAX_NUM = temp;
//	}
//	lst[1] = 1, lst[2] = 2, lst[3] = 4;
//	for (int i = 4; i <= MAX_NUM; i++) 
//		lst[i] = lst[i - 1] + lst[i - 2] + lst[i - 3];
//	for (int i = 0; i < T; i++) cout << lst[n[i]] << endl;
//	return 0;
//}

/* 1149 */
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//	int N=2;
//	int R[1001]{}, G[1001]{}, B[1001]{};
//	int d[1001][3]{};
//	cin >> N;
//	for (int i = 1; i <= N; i++) cin >> R[i] >> G[i] >> B[i];
//	d[1][0] = R[1];
//	d[1][1] = G[1];
//	d[1][2] = B[1];
//	for (int i = 2; i <= N; i++) {
//		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + R[i];
//		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + G[i];
//		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + B[i];
//	}
//	cout << *min_element(d[N], d[N]+3);
//	return 0;
//}

/* 2156 */
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//	int n, lst[100002], answer[10002];
//	cin >> n;
//	int temp = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> temp;
//		lst[i] = temp;
//	}
//	// 초기값 설정
//	answer[0] = 0, answer[1] = lst[1];
//	answer[2] = answer[1] + lst[2];
//	// 연산
//	for (int i = 3; i <= n; i++)
//		answer[i] = max(answer[i - 1], max(answer[i - 2] + lst[i], answer[i - 3] + lst[i - 1] + lst[i]));
//	cout << answer[n];
//	return 0;
//}

/* 2666 */
// top-down DP (recursive)
#include <bits/stdc++.h>
using namespace std;
int MAX_NUM = -1;
long long func(int w, int h);
long long dp[31][31];
int main() {
	memset(dp, -1, sizeof(dp));
	vector<int> lst;
	while (true) {
		int i = 0;
		cin >> i;
		if (i != 0) {
			lst.push_back(i);
			if (i > MAX_NUM) MAX_NUM = i;
		}
		else break; // if (i == 0)
	}
	func(MAX_NUM, 1);
	for (auto it = lst.begin(); it != lst.end(); it++) cout << dp[*it][0] << endl;
	return 0;
}
long long func(int w, int h) {
	if (w == 0 && h == 0) return 1;
	if (dp[w][h] != -1) return dp[w][h];
	long long ret = 0;
	if (h >= 1) {
		if (w >= 1) ret += func(w, h - 1) + func(w - 1, h + 1);
		else ret += func(w, h - 1);
	}
	else
		ret += func(w - 1, h + 1);
	return dp[w][h] = ret;
}
