#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void solve();
int32_t main() {
    tee
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}

void BFS(int s, vector<vector<int>>& g, vector<bool>& v) {
    queue<int> q;
    q.push(s);
    v[s] = true;
    
    while (!q.empty()) {
        int t = q.front(); 
        q.pop();
        for (int c : g[t]) {
            if (!v[c]) {
                q.push(c);
                v[c] = true;
            } 
        }
    }
}

void solve() {
    int n, e; 
    cin >> n >> e;
    vector<vector<int>> g(n + 1);

    int u, v;
    for (int i = 1; i <= e; i++) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<bool> vis(n + 1, false);
    BFS(1, g, vis);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    if(n == e){
        cout << "FHTAGN!" << endl;
    }else{
        cout << "NO" << endl;
    }
}
