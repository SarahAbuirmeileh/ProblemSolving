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

    int n, d;
    cin >> n >> d;
    vector<int>v(n);

    for (int i=0; i<n; i++) {
        cin >> v[i]; 
    }
    sort(v.begin(),v.end());

    int ans =0, j;
    for (int i=1; i<n; i++) {
        j=i-1;
        while(j>=0 && abs(v[i]-v[j]) <= d ){
            ans++;
            j--;
        }
    }
    cout << ans*2 << endl;
}