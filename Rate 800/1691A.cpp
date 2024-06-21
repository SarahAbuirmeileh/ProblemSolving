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
    vector<int>v(n);

    int o = 0, e = 0;
    for (int i=0; i<n; i++) {
        cin >> v[i]; 
        if (v[i]%2){
            o++;
        }else{
            e++;
        }
    }
    cout << min(o, e) << endl;
    
}