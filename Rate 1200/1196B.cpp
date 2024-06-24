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
    cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    int n, k; 
    cin >> n >> k;
    vector<int>v;

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x; 
        if(x % 2){
            v.push_back(i+1);
        }
    }

    if(v.size() < k){
        cout << "NO" << endl;
    }else{
        if((v.size()-k)%2 !=0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            for (int i = 0; i< k-1; i++){
                cout << v[i] << " ";
            }
            cout << n << endl;
        }
        
    }
}