#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }



int BFS(int x0, int y0, int x1, int y1, const set<pair<int, int>>& cells) {
    vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, 
                                  {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
    
    map<pair<int, int>, int> dis;
    queue<pair<int, int>> q;

    q.push({x0, y0});
    dis[{x0, y0}] = 0;

    while (!q.empty()) {
        pair<int, int> t = q.front(); q.pop();
        int x = t.first, y = t.second;

        if (x == x1 && y == y1) {
            return dis[{x, y}];
        }

        for (auto& d : dir) {
            int nx = x + d.first, ny = y + d.second;
            if (cells.count({nx, ny}) && !dis.count({nx, ny})) {
                dis[{nx, ny}] = dis[{x, y}] + 1;
                q.push({nx, ny});
            }
        }
    }

    return -1;
}

void solve() {
    int x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;

    int n; cin >> n;
    set<pair<int, int>> cells;
    for (int i = 0; i < n; ++i) {
        int ri, ai, bi;
        cin >> ri >> ai >> bi;
        for (int j = ai; j <= bi; ++j) {
            cells.insert({ri, j});
        }
    }

    int result = BFS(x0, y0, x1, y1, cells);
    cout << result << endl;
}

int32_t main() {
    tee
    solve();
    return 0;
}
