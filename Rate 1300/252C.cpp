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

    int n, d; 
    cin >> n >> d;
    vector<int>v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }

    int ans  = 0;
    for( int i=0; i<n-2; i++){
        int j = upper_bound(v.begin(), v.end(), v[i] +d) - v.begin() - 1;
        if(j-i >=2){
            int k = j-i-1;
            // cout << v[i] << " " << k << endl;
            ans += k*(k+1)/2;
        }
    }

    cout << ans << endl;
}