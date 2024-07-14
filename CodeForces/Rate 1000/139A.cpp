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
    vector<int>v(7);

    int sum = 0;
    for (int i=0; i<7; i++) {
        cin >> v[i]; 
        sum += v[i];
    }
    
    n = n % sum;
    if (!n){
        n=sum;
    }

    for (int i=0; i<7; i++) {
        n -=v[i];
        if (n <= 0){
            cout << i + 1 << endl;
            return;
        }
    }    
}
