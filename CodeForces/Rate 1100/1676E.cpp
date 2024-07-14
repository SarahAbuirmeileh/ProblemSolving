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

    int n, q; 
    cin >> n >> q;
    vector<int>v(n);

    for (int i=0; i<n; i++) {
        cin >> v[i]; 
    }
    sort(v.rbegin(), v.rend());
    for (int i=1; i<n; i++) {
        v[i]+=v[i-1];
        // cout << v[i] << " ";
    }
    int x;
    while(q--){
        cin >>x;
        if(v[n-1] < x){
            cout << -1 << endl;
        }else{
            int ans = 0;
            for(int i=0; i<n; i++){
                // cout << * upper_bound (v.begin(), v.end(), x)  << endl;
                cout << lower_bound (v.begin(), v.end(), x) - v.begin() +1 << endl;
                break;
            }
        }
    }
}