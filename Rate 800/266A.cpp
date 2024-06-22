#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define not_less_than(v, x) lower_bound(v.begin(), v. end(), x)                   // x >=
#define not_more_than(v, x) lower_bound(v.rbegin(), v.rend(), x, greater<int>())  // x <=
#define more_than(v, x) upper_bound (v.begin(), v.end(), x)                       // x <
#define less_than(v, x)upper_bound (v. rbegin(), v.rend(), x, greater<int>())     // x >

void solve();
int32_t main() {
    tee
    int t = 1;
    // cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    int n; cin >> n;
    string str; cin >> str;
    
    int ans = 0;
    for (int i = 0; i < n-1; i++) {
        if(str[i]==str[i+1]){
            ans++;
        }
    }
    cout << ans << endl;    
}