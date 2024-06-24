#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void solve();
int32_t main() 
{
    tee
    int t=1; //cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}
void solve(){
    int n, mm; cin >> n >> mm;
    map<int,int>m;
    for (int i=1; i<=n; i++){
        int x; cin >> x;
        m[x]++;
    }
    int sum =0;
    for (auto &it : m){
        sum += it.second;
        it.second=sum;
    }
    for (int j=0; j<mm; j++){
        int x; cin >> x;
        auto stop= m.upper_bound(x);
        stop--;
        if (stop->first <= x)
            cout << stop->second << " ";
        else cout << 0 << " ";
    }
}