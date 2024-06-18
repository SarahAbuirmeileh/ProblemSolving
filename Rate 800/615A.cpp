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

    int n, m; 
    cin >> n >> m;
    set<int>s;

    int x, num;
    for (int i=0; i<n; i++) {
        cin >>num;
        for (int j=0; j<num; j++){
            cin >>x;
            s.insert(x);
        }
    }
    if(s.size()==m){
        cout << "YES";
    }else{
        cout << "NO" ;
    }
}