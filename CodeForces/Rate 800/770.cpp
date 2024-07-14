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

    int n, k; 
    cin >> n >> k;
    vector<int>v(n);

    for (int i = 0; i<k && n--; i = (i+1)%k) {
        cout << char(i + 'a');
    }

}