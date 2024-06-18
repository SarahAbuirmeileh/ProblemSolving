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
    deque<int>dq;

    int x;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (dq.empty()){
            dq.push_front(x);
        }else if(x<dq.front()){
            dq.push_front(x);
        }else{
            dq.push_back(x);
        }
    }
    for(auto q : dq){
        cout << q << " ";
    }
    cout << endl;
}