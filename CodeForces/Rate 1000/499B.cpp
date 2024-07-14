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

    map<string, string>mm;

    string str1, str2;
    while(m--){
        cin >> str1 >> str2;
        mm[str1]=str2;
    }

    for (int i=0; i<n; i++) {
        cin >> str1;
        if(str1.size() <= mm[str1].size()){
            cout << str1 << " ";
        }else{
            cout << mm[str1] << " ";
        }
    }
    
}