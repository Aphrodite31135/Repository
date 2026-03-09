/* 1920 */
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int N;
//    cin >> N;
//
//    vector<int> A(N);
//    for (int i = 0; i < N; i++) cin >> A[i];
//
//    int M;
//    cin >> M;
//
//    vector<int> targets(M);
//    for (auto it = targets.begin(); it != targets.end(); ++it) cin >> *it;
//
//    sort(A.begin(), A.end());
//
//    for (auto it = targets.begin(); it != targets.end(); ++it) {
//        auto pos = lower_bound(A.begin(), A.end(), *it);
//
//        if (pos != A.end() && *pos == *it) {
//            cout << 1 << '\n';
//        }
//        else {
//            cout << 0 << '\n';
//        }
//    }
//
//    return 0;
//}

/* 10816 */
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int N;
//    cin >> N;
//
//    vector<int> A(N);
//    for (int i = 0; i < N; i++) cin >> A[i];
//
//    int M;
//    cin >> M;
//
//    vector<int> targets(M);
//    for (auto it = targets.begin(); it != targets.end(); ++it) cin >> *it;
//
//    sort(A.begin(), A.end());
//
//    for (auto it = targets.begin(); it != targets.end(); ++it) {
//        int cnt = upper_bound(A.begin(), A.end(), *it) - lower_bound(A.begin(), A.end(), *it);
//        cout << cnt << ' ';
//    }
//
//    return 0;
//}

/* 18870 */
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	vector<int> X(N);
//	vector<int> temp;
//	for (int i = 0; i < N; i++) {
//		cin >> X[i];
//		temp.push_back(X[i]);
//	}
//	
//	sort(temp.begin(), temp.end());
//	temp.erase(unique(temp.begin(), temp.end()), temp.end());
//
//	for (auto it = X.begin(); it != X.end(); it++)
//		cout << lower_bound(temp.begin(), temp.end(), *it) - temp.begin() << " ";
//
//	return 0;
//}

/* 18869 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int M, N = 0;
	cin >> M >> N;
	vector<vector<int>> Multiverse(M);
	vector<int> Universe;
	vector<vector<int>> TempMultiverse(M);
	for (int i = 0; i < M; i++) {
		Universe.clear();
		for (int j = 0; j < N; j++) {
			int num;
			cin >> num;
			Universe.push_back(num);
		}
		Multiverse[i] = Universe;
		TempMultiverse[i] = Universe;
	}

	for (int i = 0; i < M; i++) {
		sort(TempMultiverse[i].begin(), TempMultiverse[i].end());
		TempMultiverse[i].erase(unique(TempMultiverse[i].begin(), TempMultiverse[i].end()), TempMultiverse[i].end());
	}
	vector<string> compare;
	for (auto i = 0; i < M; i++) {
		string str = "";
		for (auto it = Multiverse[i].begin(); it != Multiverse[i].end(); it++)
			str += to_string(lower_bound(TempMultiverse[i].begin(), TempMultiverse[i].end(), *it) - TempMultiverse[i].begin())+",";
		compare.push_back(str);
	}
	sort(compare.begin(), compare.end());

	int answer = 0, count = 1;
	for (int i = 1; i < M; i++) {
		if (compare[i] == compare[i - 1]) count++;
		else {
			answer += count * (count - 1) / 2;
			count = 1;
		}
	}
	answer += count * (count - 1) / 2;
	cout << answer;

	return 0;
}