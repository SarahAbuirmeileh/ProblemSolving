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

void solve(){

    int n; cin >> n;
    if(n<4){
        cout <<"NO";
        return;
    }
    cout << "YES" << endl;
    if(n == 4){
        cout << "1 * 2 = 2 " << endl;
        cout << "2 * 3 = 6 " << endl;
        cout << "6 * 4 = 24" << endl;
    }else if (n == 5){
        cout << "4 * 5 = 20" << endl;
        cout << "3 - 1 = 2" << endl;
        cout << "2 * 2 = 4 " << endl;
        cout << "20 + 4 = 24" << endl;
    }else{
        cout << "1 + 2 = 3" << endl;
        cout << "3 - 3 = 0" << endl;
        cout << "4 * 6 = 24" << endl;
        cout << "5 * 0 = 0" <<endl;
        for (int i=7; i<=n; i++){
            cout << i << " * " << 0 << " = 0" << endl;
        } 
        // cout << n << " * 0 = 0" <<endl;
        cout << "0 + 24 = 24" << endl;
    }
    
}