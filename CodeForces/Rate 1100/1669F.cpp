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
    
    int l=0, r=n-1, sum_l = v[l], sum_r =v[r], ans =0;

    while(l<r){
        // cout << l  << " " << r << " " << sum_l << " " << sum_r << " " << ans << endl;
        if(sum_l == sum_r){
            ans = l+1 + n- r;
        }
        if(sum_l>sum_r ){
            sum_r += v[--r];
        }else{
            sum_l +=v[++l];
        }
        
    }
    cout << ans << endl;
    
}