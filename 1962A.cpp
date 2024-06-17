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

    int a, b, c, d;
    cin >> a >>b >> c >>d;

    int count = 0;
    if (b > a){
        count++;
    }
    if (c > a ){
        count++;
    }
    if (d > a){
        count++;
    }
    cout << count << endl;
}