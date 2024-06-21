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
    int l = 0, r = str.size()-1, sum = 0;
    while(l <= r){
        if(str[l++] != str[r--]){
            sum++;
        }
    }
    if(sum == 1 || (sum == 0 && str.size()%2)){
        cout << "YES" ;
    }else{
        cout << "NO";
    }
    
}