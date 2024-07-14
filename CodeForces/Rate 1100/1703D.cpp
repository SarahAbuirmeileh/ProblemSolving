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
    vector<string>v(n);
    unordered_set<string>s;

    for (int i=0; i<n; i++) {
        cin >> v[i]; 
        s.insert(v[i]);
    }

    string ans = "";
    bool flag;
    for (int i=0; i<n; i++) {
       flag = false;
       for (int j = 1; j < v[i].size() ; j++){
            flag = s.count(v[i].substr(0, j)) && s.count(v[i].substr(j));
            if(flag){
                break;
            }
       }
       if(flag){
        ans += "1";
       }else{
        ans += "0";
       }
    }
    cout << ans << endl;
}