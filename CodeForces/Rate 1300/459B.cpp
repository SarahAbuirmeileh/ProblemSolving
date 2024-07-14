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
    vector<int>v(n);

    int mini = 1000000000, maxi =0 ;
    for (int i=0; i<n; i++) {
        cin >> v[i]; 
        mini = min(mini, v[i]);
        maxi = max(maxi, v[i]);
    }
    
    int mx = 0, mn = 0;
    for (int i=0; i<n; i++){
        if(v[i]==mini){
            mn++;
        }
        if(v[i]==maxi){
            mx++;
        }
    }
    cout << maxi - mini << " ";
    if(mini == maxi){
        cout << mn * (mn -1) /2;
    }else{
        cout << mn*mx << endl;
    }
}