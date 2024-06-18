#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void solve();
int32_t main() {
    tee
    int t=1;
    // cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    int n; cin >> n;
    stack<string>st;
    set<string>s;

    string str;
    for (int i=0; i<n; i++) {
        cin >> str;
        st.push(str);
    }
    
    while (!st.empty()){
        if (s.find(st.top()) == s.end()){
            cout << st.top() << endl;
            s.insert(st.top());
        }
        st.pop();
    }
    
}