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

    string str; cin >> str;

    stack<char>s;
    int ans = 0;

    for (char ss : str){
        if(s.empty()){
            s.push(ss);
        }else if (ss == '('){
            s.push('(');
        }else{
            if(s.top() == '('){
                ans+=2;
                s.pop();
            }
        }
    }
   cout << ans << endl; 
}