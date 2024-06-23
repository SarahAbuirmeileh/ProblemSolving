#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define not_less_than(v, x) lower_bound(v.begin(), v. end(), x)                   // x >=
#define not_more_than(v, x) lower_bound(v.rbegin(), v.rend(), x, greater<int>())  // x <=
#define more_than(v, x) upper_bound (v.begin(), v.end(), x)                       // x <
#define less_than(v, x)upper_bound (v. rbegin(), v.rend(), x, greater<int>())     // x >

void solve();
int32_t main() {
    tee
    int t = 1;
    // cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

bool BS(vector<int> &v, int can, vector<int> &v2, int k){
    int needed = 0;
    for(int i =0; i<v.size(); i++){
        needed += max((can * v[i]) - v2[i], 0ll);
        if(needed > k)break;
    }
    return needed <= k;
}

void solve(){

    int n, k; 
    cin >> n >> k;
    vector<int>v(n), v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    for (int i = 0; i < n; i++) {
        cin >> v2[i]; 
    }

   int l = 0, r = 2e9, mid;
   while(l<=r){
        mid = l + (r - l) /2;
        if(BS(v, mid,v2,k)){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
   }
   cout << r << endl;
}