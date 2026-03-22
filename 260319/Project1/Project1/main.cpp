/* pair */
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//	pair<int, int> t1 = make_pair(10, 13);
//	pair<int, int> t2 = { 4, 6 };	// C++11
//	cout << t2.first << ' ' << t2.second << endl;	// 4 6
//	if (t2 < t1) cout << "t2 < t1";	// t2 < t1
//	return 0;
//}

/* BFS 예제 코드 */
//#include <bits/stdc++.h>
//using namespace std;
//// pair를 편하게 쓰기 위한 define
//#define X first
//#define Y second
//// array에 파란칸을 1, 빨간 칸을 0으로 대응시킴 
//int board[502][502] =
//{ {1,1,1,0,1,0,0,0,0,0},
// {1,0,0,0,1,0,0,0,0,0},
// {1,1,1,0,1,0,0,0,0,0},
// {1,1,0,0,1,0,0,0,0,0},
// {0,1,0,0,0,0,0,0,0,0},
// {0,0,0,0,0,0,0,0,0,0},
// {0,0,0,0,0,0,0,0,0,0} };
//bool vis[502][502];
//int n = 7, m = 10;
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//int main() {
//	queue<pair<int, int>> Q;
//	vis[0][0] = 1;		// 시작점 방문을 명시
//	Q.push({ 0,0 });	// 큐에 시작점인 (0, 0)을 삽입. 
//	while (!Q.empty()) {
//		pair<int, int> cur = Q.front(); Q.pop();
//		cout << '(' << cur.X << ", " << cur.Y << ") -> ";
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = cur.X + dx[dir];
//			int ny = cur.Y + dy[dir];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue; // 범위 내 들어온 지 확인 후
//			if (vis[nx][ny] || board[nx][ny] != 1) continue; // 0이 아니거나 방문했는지 확인
//			vis[nx][ny] = 1;
//			Q.push({ nx, ny });
//		}
//	}
//}

/* 1926 */
//#include <bits/stdc++.h>
//using namespace std;
//#define X first
//#define Y second
//bool board[501][501];
//bool vis[501][501];
//int n = -1, m = -1;
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//queue<pair<int, int>> Q;
//int main() {
//	bool temp = 0;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> temp;
//			board[i][j] = temp;
//		}
//	}
//	int paintcnt = 0;
//	int maxpaintsize = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (board[i][j] ==1&&!vis[i][j]) {
//				paintcnt++;
//				Q.push({ i, j });
//				vis[i][j] = 1;
//				int paintsize = 0;
//				while (!Q.empty()) { // BFS
//					pair<int, int> cur = Q.front(); Q.pop();
//					paintsize++;
//					for (int dir = 0; dir < 4; dir++) {
//						int nx = cur.X + dx[dir];
//						int ny = cur.Y + dy[dir];
//						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
//						if (vis[nx][ny] || board[nx][ny] != 1) continue;
//						vis[nx][ny] = 1;
//						Q.push({ nx, ny });
//					}
//				}
//				maxpaintsize=max(paintsize, maxpaintsize);
//			}
//		}
//	}
//	cout << paintcnt << endl << maxpaintsize;
//}

/* 1697 */
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//	int vis[200'001];
//	int n, k;
//	fill(vis, vis+ 200'001, -1);
//	queue<int> Q;	// count
//	cin >> n >> k;
//	vis[n] = 0;
//	Q.push(n);
//	if (n == k) {
//		cout << 0;
//		return 0;
//	}
//	while (!Q.empty()) {
//		int cur = Q.front(); Q.pop();
//		int nexPos[3] = { cur - 1, cur + 1, cur * 2 };
//		for (int i = 0; i < 3; i++) {
//			int nx = nexPos[i];
//			if (nx < 0 || nx >= 200'001) continue;
//			if (vis[nx] != -1) continue;
//			vis[nx] = vis[cur] + 1;
//			if (nx == k) {
//				cout << vis[nx];
//				return 0;
//			}
//			Q.push(nx);
//		}
//	}
//}

/* DFS 예제 코드 */
//#include <bits/stdc++.h>
//using namespace std;
//// pair를 편하게 쓰기 위한 define
//#define X first
//#define Y second
//// array에 파란칸을 1, 빨간 칸을 0으로 대응시킴 
//int board[502][502] =
//{ {1,1,1,0,1,0,0,0,0,0},
// {1,0,0,0,1,0,0,0,0,0},
// {1,1,1,0,1,0,0,0,0,0},
// {1,1,0,0,1,0,0,0,0,0},
// {0,1,0,0,0,0,0,0,0,0},
// {0,0,0,0,0,0,0,0,0,0},
// {0,0,0,0,0,0,0,0,0,0} };
//bool vis[502][502];
//int n = 7, m = 10;
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//int main() {
//	stack<pair<int, int>> S;
//	vis[0][0] = 1;		// 시작점 방문을 명시
//	S.push({ 0,0 });	// 스택에 시작점인 (0, 0)을 삽입. 
//	while (!S.empty()) {
//		pair<int, int> cur = S.top(); S.pop();
//		cout << '(' << cur.X << ", " << cur.Y << ") -> ";
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = cur.X + dx[dir];
//			int ny = cur.Y + dy[dir];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue; // 범위 내 들어온 지 확인 후
//			if (vis[nx][ny] || board[nx][ny] != 1) continue; // 0이 아니거나 방문했는지 확인
//			vis[nx][ny] = 1;
//			S.push({ nx, ny });
//		}
//	}
//}

/* 1012 */
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
bool board[51][51];
bool vis[51][51];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int main() {
	int t;
	cin >> t;
	vector<int> lst;
	while (t--) {
		int m, n, k;
		cin >> m >> n >> k;
		for (int i = 0; i < 51; i++) {
			fill(board[i], board[i] + 51, 0);
			fill(vis[i], vis[i] + 51, 0);
		}
		while (k--) {
			int x, y;
			cin >> x >> y;
			board[y][x] = 1;
		}
		int cnt = 0;
		queue<pair<int, int>> Q;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] && !vis[i][j]) {
					cnt++;
					vis[i][j] = 1;
					Q.push({ i,j });
					while (!Q.empty()) {
						pair<int, int> cur = Q.front(); Q.pop();
						for (int dir = 0; dir < 4; dir++) {
							int nx = cur.X + dx[dir];
							int ny = cur.Y + dy[dir];
							if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
							if (vis[nx][ny] || !board[nx][ny]) continue;
							vis[nx][ny] = 1;
							Q.push({ nx, ny });
						}
					}
				}
			}
		}
		lst.push_back(cnt);
	}
	for (auto it = lst.begin(); it != lst.end(); it++) cout << *it << endl;
}