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
    cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    int n, x; 
    cin >> n >> x;
    vector<int>v(n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
        sum += v[i];
    }
    if(sum % x){
        cout << n << endl;
        return;
    }
    
    int l = 0, r = n-1;
    while(l<n && !(v[l]%x)){
        l++;
    }

    while(r>=0 && !(v[r]%x)){
        r--;
    }

    if(l>=r){
        cout << -1 << endl;
    }else{
        cout << max(n - l - 1, r) << endl;
    }
}