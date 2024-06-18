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
    int f = 1, l = n*n;
    for (int i=0; i<n; i++){
        for (int j = 0; j<n/2; j++){
            cout << f++ << " " <<  l-- << " ";
        }
        cout << endl;
    }
    
}