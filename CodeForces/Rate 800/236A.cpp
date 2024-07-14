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
    // cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    string str; cin >> str;
    set<char>s;

    for (int i = 0; i < str.length(); i++){
        s.insert(str[i]);
    }
    if (s.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
}