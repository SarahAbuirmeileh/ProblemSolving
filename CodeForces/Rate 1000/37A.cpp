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
    set<int>s;
    map<int, int>m;

    int x, maxi =0;
    for (int i=0; i<n; i++) {
        cin >> x; 
        m[x]++;
        maxi = max(maxi, m[x]);
        s.insert(x);
    }
    cout << maxi << " " << s.size() << endl;
    
}