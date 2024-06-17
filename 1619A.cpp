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

    string str; cin >> str;
    int len = str.size();

    if (len % 2 != 0){
        cout << "NO" << endl;
            return;
    }

    for (int i = 0; i < len/2; i++){
        // cout << str[i] << "  "<< str[len/2 + i] << endl;
        if(str[i] != str[len/2 + i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}