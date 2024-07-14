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

void solve(){

    string str; cin >>str;
    set<char>s;

    int ans =0;
    for (auto ss : str){
        if(s.size()==3 ){
            if (s.find(ss) == s.end()){
                s.clear();
                ans++;
            }            
        }
        s.insert(ss);
    }
    cout <<  ans +  !s.empty() << endl;
}