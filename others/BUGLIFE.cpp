#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define not_less_than(v, x) lower_bound(v.begin(), v. end(), x)                   // x >=
#define not_more_than(v, x) lower_bound(v.rbegin(), v.rend(), x, greater<int>())  // x <=
#define more_than(v, x) upper_bound (v.begin(), v.end(), x)                       // x <
#define less_than(v, x)upper_bound (v. rbegin(), v.rend(), x, greater<int>())     // x >

void solve();
int32_t main() {
    tee
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Scenario #" << i << ":" << endl;
        solve();
    }
    return 0;
}

bool BFS(int s, vector<vector<int>>&g, vector<int>&v){
    queue<int>q;
    q.push(s);
    v[s] = 1;

    while(q.size()){
        int t = q.front(); q.pop();
        for(int c : g[t]){
            if(!v[c]){
                q.push(c);
                v[c]=3-v[t];
            }else if(v[c] == v[t]){
                return false;
            }
        }
    }
    return true;
}

void solve(){

    int n, e; 
    cin >> n >> e;
    vector<vector<int>>g(n+1, vector<int>({}));

    int u, v;
    for (int i = 1; i <= e; i++) {
        cin >> u >> v;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    
    vector<int> vis(n+1, 0);
    
    for(int i=1; i <= n; i++){
        if(!vis[i]){
            if(!BFS(i,g,vis)){
                cout << "Suspicious bugs found!" << endl;
                return;
            }
        }
    }
    cout << "No suspicious bugs found!" << endl; 
}