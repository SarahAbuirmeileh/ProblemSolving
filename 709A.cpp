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

    int n, b, d;
    cin >> n >> b >> d;
    vector<int>v(n);

    for (int i=0; i<n; i++) {
        cin >> v[i]; 
    }
    
    int sum = 0, count = 0;
    for (int i=0; i<n; i++) {
        if (v[i] <= b){
            sum += v[i];
            if (sum > d){
                count++;
                sum =0;
            }
        }
    }
    cout << count ;
}