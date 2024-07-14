#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define not_less_than(v, x) lower_bound(v.begin(), v. end(), x)                   // x >=
#define not_more_than(v, x) lower_bound(v.rbegin(), v.rend(), x, greater<int>())  // x <=
#define more_than(v, x) upper_bound (v.begin(), v.end(), x)                       // x <
#define less_than(v, x)upper_bound (v. rbegin(), v.rend(), x, greater<int>())     // x >

const int dx[] = { 0,0,1,-1 };
const int dy[] = { 1,-1,0,0 };

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

void BFS(int s, vector<vector<int>>&g, vector<bool>&v, int& lvl ){
    queue<int>q;
    q.push(s);
    v[s]=true;
    int l = 1;

    while(!q.empty()){
        int t = q.front(); 
        q.pop();
        for(int c : g[t]){
            if(!v[c]){
                q.push(c);
                v[c] = true;
            }
        }
        l++;
        lvl = max(l, lvl);
    }
}

void solve(){

    int n; 
    cin >> n;
    vector<vector<int>>g (n+1,vector<int>({}));

    int u, v;
    for (int i = 1; i <=n; i++) {
        cin >> u;
        if(u != -1){
            g[u].push_back(i);
        }
    }

    vector<bool>vis(n, false);
    int lvl = 1;
    BFS(1, g, vis, lvl);
    cout << lvl << endl;

}

