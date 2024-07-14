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

    int n, q; 
    cin >> n >> q;
    vector<int>v(n);

    for (int i=0; i<n; i++) {
        cin >> v[i]; 
    }
    
    int x;
    while(q--){
        cin >> x;
        int l = 0, h = n -1, mid;
        bool flag = false;
        while(l <= h){
            mid = ( h + l ) / 2;
            if(v[mid] == x){
                flag = true;
                break;
            }else if(v[mid] > x){
                h = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    
    
}