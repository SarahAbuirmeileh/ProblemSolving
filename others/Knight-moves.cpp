#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int BFS(int sx, int sy, int tx, int ty, vector<vector<bool>>& vis) {
    queue<pair<int, int>> q;
    q.push({sx, sy});
    vis[sx][sy] = true;

    vector<vector<int>> cost(8, vector<int>(8, 0));

    vector<pair<int, int>> dis = { {1, 2}, {-1, 2}, {1, -2}, {-1, -2}, 
                                   {2, 1}, {-2, 1}, {2, -1}, {-2, -1} };
    
    while (!q.empty()) {
        pair<int, int> t = q.front(); q.pop();
        int x = t.first, y = t.second;

        if (x == tx && y == ty) {
            return cost[x][y];
        }
        
        for (auto d : dis) {
            int nx = x + d.first, ny = y + d.second;
            
            if (nx >= 0 && nx <= 7 && ny >= 0 && ny <= 7 && !vis[nx][ny]) {
                q.push({nx, ny});
                vis[nx][ny] = true;
                cost[nx][ny] = cost[x][y] + 1;
            }
        }
    }
    return -1; 
}

int solve(string s, string t) {
    vector<vector<bool>> vis(8, vector<bool>(8, false));
    return BFS(s[0] - 'a', s[1] - '1', t[0] - 'a', t[1] - '1', vis);
}

int32_t main() {
    tee;
    string s, t;
    while (cin >> s >> t) {
        cout << "To get from " << s << " to " << t << " takes " << solve(s, t) << " knight moves." << endl;
    }
    return 0;
}
