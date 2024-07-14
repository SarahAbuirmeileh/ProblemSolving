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

    string a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < a.size(); i++){
        if( a[i] != c[i] && b[i] != c[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}