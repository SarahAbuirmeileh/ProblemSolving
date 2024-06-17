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
    if (str.length()<=10){
        cout << str << endl;
    }else{
        cout << str[0] <<  str.length()-2 << str[str.length()-1] << endl;
    }
}