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

    int n, k, q, size = 200000; 
    cin >> n >> k >> q;
    vector<int>v(size + 1), adm(size + 1);

    int l, r;
    for (int i = 1; i <= n; i++) {
        cin >> l >> r;
        v[l ]++;
        v[r + 1]--;
        // cout << l << " " << v[l-1] << " " << r << " " << v[r] << endl;
    }
    
    for (int i = 1; i <= size; i++) {
        v[i] += v[i-1];
    }

    for (int i = 1; i <= size; i++) {
        if(v[i] >= k){
            adm[i]++;
        }
        adm[i] += adm[i-1];
    }
    
    while(q--){
        cin >> l >> r;
        cout << adm[r] - adm[l-1] << endl;
    }
}