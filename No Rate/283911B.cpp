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

bool BS(int mid, vector<int> &v, int val){
    return v[mid] <= val;
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
        int l = 0, h = n - 1, mid;
        while(l <= h){
            mid = (l+h)/2;
            if(BS(mid, v, x)){
                l = mid + 1;
            }else{
                h = mid - 1;
            }
        } 
        cout << h + 1 << endl;
    }
}
