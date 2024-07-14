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

    int n, x;
    cin >> n >> x;
    vector<int>v(n);

    int index =0;
    for (int i=0; i<n; i++) {
        cin >> v[i]; 
        if (v[i]/x + (v[i]%x !=0) >= v[index]/x + (v[index]%x !=0)){
            index = i;
        }
    }
    cout << index + 1 ;    
}