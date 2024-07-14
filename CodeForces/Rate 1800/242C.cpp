#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void solve();
int32_t main() {
    tee;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    return 0;
}

int BFS(int x0, int y0, int x1, int y1, set<pair<int ,int>>&cells) {
    queue<pair<int, int>> q;
    q.push({x0, y0});

    map<pair<int, int>, int>m;
    m[{x0, y0}]=0;

    vector<pair<int, int>> dis = { {0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1} };

    while (!q.empty()) {
        pair<int, int> t = q.front(); q.pop();
        int x = t.first, y = t.second;

        if (x == x1 && y == y1) {
            return m[{x, y}];
        }
        
        for (auto d : dis) {
            int nx = x + d.first, ny = y + d.second;
            
            if (!m.count({nx, ny}) && cells.count({nx, ny})) {
                q.push({nx, ny});
                m[{nx, ny}] = m[{x, y}]+1;
            }
        }
    }
    return -1; 
}

void solve() {
    int x0, y0, x1, y1; cin >> x0 >> y0 >> x1 >> y1;

    int n; cin >> n;
    int r, a, b;
    set<pair<int ,int>>cells;
    for(int i=0; i<n; i++){
        cin >> r >> a >> b;
        for(int j = a; j<= b; j++){
            cells.insert({r, j});
        }
    }
    cout << BFS(x0, y0, x1, y1, cells) << endl;
}

