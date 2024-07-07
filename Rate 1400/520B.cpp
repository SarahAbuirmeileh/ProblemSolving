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
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}

void BFS (int n, int m ){
    queue<pair<int,int>>q;
    map<int, int>mm;

    q.push({n, 0});
    mm[n]=0;
    

    while(!q.empty()){

        pair<int, int> t = q.front();  q.pop();
        if(t.first == m){
            cout <<  t.second << endl;
            return;
        }

        if(t.first < m){
            if (mm.find(t.first*2) == mm.end()){ 
                mm[t.first*2]=t.second+1;
            }
            q.push({t.first*2,  mm[t.first*2]});
        }
        
        if(mm.find(t.first-1) == mm.end()){
            mm[t.first-1]=t.second+1;
        }
        q.push({t.first-1, mm[t.first-1]});
    }
}

void solve(){

    int n, m; cin >> n >> m;
    int ans=0;
    while(n < m){
        (m & 1) ? m++ : m/=2;
        ans++;
    }
    cout << ans + n - m << endl;
}