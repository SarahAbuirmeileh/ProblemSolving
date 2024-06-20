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

    int n, q; 
    cin >> n >> q;
    vector<int>v(n);

    for (int i=0; i<n; i++) {
        cin >> v[i]; 
    }
    sort(v.rbegin(),v.rend());
    for (int i=1; i<n; i++) {
        v[i] += v[i-1]; 
    }

    int x, y;
    while(q--){
        cin >> x >> y;
        if (x == y){
            cout << v[x-1] << endl;
        }else{
            cout << v[max(x-1, 0ll)]-v[max(x-1-y, 0ll)] << endl;
        }
        
    }
}