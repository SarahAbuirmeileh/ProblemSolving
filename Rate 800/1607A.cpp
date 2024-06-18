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
    cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    string key, str;
    cin >> key >> str;
    
    map<char, int>m;
    for (int i = 0; i < key.size(); i++){
        m[key[i]] = i + 1;
    }

    int ans = 0;
    for (int i = 1; i < str.size(); i++){
        ans += abs(m[str[i]] - m[str[i-1]]);
    }

    cout << ans << endl;
}