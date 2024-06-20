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

    string str; cin >>str;
    int q; cin >> q;

    int l, r; 
    vector<int>v(str.size());
    v[0]=0;
    for(int i=1; i<str.size(); i++){
        v[i] = v[i-1];
        if(str[i] == str[i-1]){
            v[i]++;
        }
    }

    while(q--){
       cin >> l >>r;
       cout << v[r-1]-v[l-1] << endl;
    }

    
}