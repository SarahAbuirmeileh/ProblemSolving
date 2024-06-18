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

void solve() {
    string str; cin >> str;
    vector<char> s; 

    for (char ss : str) {
        if (!s.empty() && s.back() == ss) {
            s.pop_back();
        } else {
            s.push_back(ss);
        }
    }

    string ans(s.begin(), s.end());
    cout << ans << endl;
}