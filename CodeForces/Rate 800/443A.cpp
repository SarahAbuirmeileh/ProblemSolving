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

    string str;
    getline(cin,str);
    set<char>s;

    for (auto ss : str){
        if(ss != '{' && ss != '}' && ss != ',' && ss != ' '){
            s.insert(ss);
        }
    }
    cout << s.size();
}