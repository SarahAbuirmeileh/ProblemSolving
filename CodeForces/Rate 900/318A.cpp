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

    int n, k; 
    cin >> n >> k;

    n = (n+1)/2;

    if (k <= n){
        cout << (k-1) * 2  + 1;
    }else{
        cout << 2*(k-n) ;
    }
    
}