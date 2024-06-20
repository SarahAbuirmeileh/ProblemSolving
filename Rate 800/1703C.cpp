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

    int n; cin >> n;
    vector<int>v(n);

    for (int i=0; i<n; i++) {
        cin >> v[i]; 
    }
    
    int x;
    string str;
    // cout << n << endl;
    for (int i=0; i<n; i++) {
        cin >> x >> str; 
        for (int j = 0; j < x; j++){
            if(str[j] == 'U'){
                v[i] =  v[i] ? (v[i] - 1) : 9;
            }else{
                v[i] = (v[i] + 1) % 10;
            }
        }
    }

    for (int i=0; i<n; i++) {
        cout <<  v[i] << " "; 
    }
    cout << endl;
}