#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define not_less_than(v, x) lower_bound(v.begin(), v. end(), x)                   // x >=
#define not_more_than(v, x) lower_bound(v.rbegin(), v.rend(), x, greater<int>())  // x <=
#define more_than(v, x) upper_bound (v.begin(), v.end(), x)                       // x <
#define less_than(v, x)upper_bound (v. rbegin(), v.rend(), x, greater<int>())     // x >

const int dx[] = { 0,0,1,-1 };
const int dy[] = { 1,-1,0,0 };

void solve();
int32_t main() {
    tee
    // #ifndef ONLINE_JUDGE 
    //     freopen("input.txt", "r", stdin); 
    //     freopen("output.txt", "w", stdout); 
    // #endif 
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}

void solve(){

    int n; cin >> n;
    vector<int>v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    
    cout << abs(v[0]-v[1]) << " " << abs(v[0]-v[n-1]) << endl;
    for (int i = 1; i < n-1; i++) {
        cout << min(abs(v[i]-v[i+1]),  abs(v[i]-v[i-1])) << " " << max(abs(v[i]-v[n-1]), abs(v[i]-v[0]) )<< endl;
    }
    cout << abs(v[n-2]-v[n-1])  << " " << abs(v[0]-v[n-1]) << endl;
}