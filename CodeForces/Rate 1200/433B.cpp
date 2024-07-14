#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void solve();
int32_t main() {
    tee
    int t=1;
    // cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    int n; cin >> n;
    vector<int>v(n + 1), sorted(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        sorted[i] = v[i];
        v[i] += v[i - 1]; 

    }

    sort(sorted.begin(),sorted.end());
    for (int i = 1; i <= n; i++) {
        sorted[i] += sorted[i - 1]; 
    }
    
    int q; cin >> q;
    int l, r, x;
    while(q--){
        cin >> x >> l >> r;
        if(x == 1){
            cout << v[r] - v[max(l-1, 0ll)] << endl;
        }else{
            cout << sorted[r] - sorted[max(l-1, 0ll)] << endl;
        }
    }
}