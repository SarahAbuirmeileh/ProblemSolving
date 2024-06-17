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
    cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    int n, x; 
    cin >> n >> x;
    vector<int>a(n), b(n);

    for (int i=0; i<n; i++) {
        cin >> a[i]; 
    }
    for (int i=0; i<n; i++) {
        cin >> b[i]; 
    }
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());

    for (int i=0; i<n; i++) {
        if (a[i]+b[i]>x){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}