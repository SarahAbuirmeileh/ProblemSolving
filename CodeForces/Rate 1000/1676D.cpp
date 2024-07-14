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

    int n, m;
    cin >> n >> m;
    vector<vector<int>>v(n, vector<int>(m));

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            cin >> v[i][j]; 
        }
    }
    int ans = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            int ii = i+1, jj =j+1, sum =v[i][j];
            while(ii<n && jj <m){
                sum += v[ii++][jj++];
            }
            ii = i-1, jj=j+1;
            while(ii>=0 && jj <m){
                sum += v[ii--][jj++];
            }
            ii = i+1, jj=j-1;
            while(ii<n && jj >=0){
                sum += v[ii++][jj--];
            }
            ii = i-1, jj=j-1;
            while(ii>=0 && jj >=0){
                sum += v[ii--][jj--];
            }
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
}