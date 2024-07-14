#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define not_less_than(v, x) lower_bound(v.begin(), v. end(), x)                   // x >=
#define not_more_than(v, x) lower_bound(v.rbegin(), v.rend(), x, greater<int>())  // x <=
#define more_than(v, x) upper_bound (v.begin(), v.end(), x)                       // x <
#define less_than(v, x)upper_bound (v. rbegin(), v.rend(), x, greater<int>())     // x >

const int dx[] = { 0, 0, 1, -1 };
const int dy[] = { 1, -1, 0, 0 };

void solve();
int32_t main() {
    tee
    int t = 1;
    // cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

bool isValid(int x, int y, int n, int m, vector<vector<char>>& g) {
    return (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == '.');
}

bool isLeaf(int x, int y, int n, int m, vector<vector<char>>& g, vector<vector<bool>>& vis) {
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (isValid(nx, ny, n, m, g)) {
            if (!vis[nx][ny]) {
                return 0;
            }
		}
	}
	return 1;
}

void DFS(int x, int y, int n, int m, int &k, vector<vector<char>>& g, vector<vector<bool>>& vis) {
    vis[x][y] = true;
    
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (isValid(nx, ny, n, m, g) && !vis[nx][ny]) {
            DFS(nx, ny, n, m, k, g, vis);
        }
    }
    
    if (k){
        // cout << k<< endl;
        if (isLeaf(x, y, n, m, g, vis)) {
            g[x][y] = 'X';
            k--;
        }
    } 
}

void solve() {
    int n, m, k; 
    cin >> n >> m >> k;
    vector<vector<char>> g(n, vector<char>(m));
    pair<int, int> s;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> g[i][j];
            if (g[i][j] == '.') {
                s = {i, j};
            }
        }
    }

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    DFS(s.first, s.second, n, m, k, g, vis);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << g[i][j];
        }
        cout << endl;
    }
}
