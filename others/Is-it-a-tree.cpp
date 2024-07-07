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
    // cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void BFS(int s, vector<vector<int>>&g, vector<bool>&v){
    queue<int>q;
    q.push(s);
    v[s] = true;

    while(q.size()){
        int t = q.front(); q.pop();
        for(int c : g[t]){
            if(!v[c]){
                q.push(c);
                v[c]=true;
            }
        }
    }
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
    
    if(n-1 != e){
        cout << "NO" << endl;
    }else{
        vector<bool> vis(n+1, false);
        BFS(1,g,vis);
        for(int i=1; i<=n; i++){
            if(!vis[i]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
}