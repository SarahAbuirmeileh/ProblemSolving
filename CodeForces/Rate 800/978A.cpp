#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void solve();
int32_t main() 
{
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
    vector<int>v(n), ans;

    for (int i=0; i<n; i++) {
        cin >> v[i]; 
    }
    
    set<int>s;

    for (int i =n-1; i>=0; i--) {
        if(s.find(v[i]) == s.end()){
            s.insert(v[i]);
            ans.push_back(v[i]);
        }
    }

    cout << ans.size() << endl;
    for (int i=ans.size()-1; i>=0; i--) {
        cout << ans[i] << " ";
    }
}