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

    int n; cin >> n;
    string str;
    map<string, int>m;

    for (int i=0; i<n; i++) {
        cin >> str;
        m[str]++;
        if(m[str] == 1){
            cout << "OK" << endl;
        } else{
            cout << str << m[str] -1 << endl;
        }
    }   
}