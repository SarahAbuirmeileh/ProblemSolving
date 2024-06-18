#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void solve();
int32_t main() {
    tee
    int t=1;
    cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    int n; cin >> n;
    map<int, int>m;

    int x;
    for (int i=0; i<n; i++){
        cin >> x;
        m[x]++;
    }
    
    for (auto mm : m){
        if (mm.second >= 3){
            cout << mm.first << endl;
            return;
        }
    }
    cout << -1 << endl;
}