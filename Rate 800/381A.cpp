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

    int n; cin >> n;
    vector<int>v(n);

    for (int i=0; i<n; i++) {
        cin >> v[i]; 
    }
    
    int s =0, d =0;
    int f = 0, l =n-1;

    for (int i=0; i<n; i++) {
        if (v[f] >v[l]){
            if (i%2 == 0){
                s += v[f++];
            }else{
                d += v[f++];
            }
        }else{
            if (i%2 == 0){
                s += v[l--];
            }else{
                d += v[l--];
            }
        }
    }
    cout << s << " " << d ;
}