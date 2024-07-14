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

void solve() {
    int n; 
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j]; 
        }
    }
    
    int ans = 0;

    for (int i = 0; i < (n + 1) / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            int ones = 0, zeros = 0;

            if (a[i][j] == '1') ones++; else zeros++;
            if (a[j][n-1-i] == '1') ones++; else zeros++;
            if (a[n-1-i][n-1-j] == '1') ones++; else zeros++;
            if (a[n-1-j][i] == '1') ones++; else zeros++;

            ans += min(ones, zeros);
        }
    }
    cout << ans << endl;
}
