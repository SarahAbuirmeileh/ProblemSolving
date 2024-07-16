#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void BFS(vector<pair<int, int>>& burn, vector<vector<bool>>& vis, int n, int m, pair<int, int>& ans) {
    queue<pair<int, pair<int, int>>> q;
    
    for (auto b : burn) {
        q.push({1, b});
        vis[b.first][b.second] = true;
    }

    vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int ansLvl = 0;
    
    while (!q.empty()) {
        int lvl = q.front().first;
        pair<int, int> t = q.front().second;
        q.pop();
        
        int x = t.first, y = t.second;
        
        for (auto d : dir) {
            int nx = x + d.first, ny = y + d.second;
            
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= m) {
                if (!vis[nx][ny]) {
                    q.push({lvl + 1, {nx, ny}});
                    vis[nx][ny] = true;
                    
                    if (ansLvl < lvl + 1) {
                        ansLvl = lvl + 1;
                        ans = {nx, ny};
                    }
                }
            }
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;
    
    vector<pair<int, int>> burn(k);
    vector<vector<bool>> vis(n + 1, vector<bool>(m + 1, false));

    int u, v;
    for (int i = 0; i < k; ++i) {
        cin >> u >> v;
        burn[i] = {u, v};
    }
    
    pair<int, int> ans = {u, v};
    BFS(burn, vis, n, m, ans);
    
    cout << ans.first << " " << ans.second << endl;
}

int32_t main() {
    tee;
    int t = 1;
    // cin >> t; 
  
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
  
    while (t--) {
        solve();
    }
    return 0;
}
