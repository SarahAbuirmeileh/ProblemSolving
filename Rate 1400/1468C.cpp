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
    int x;
    priority_queue<pair<int, int>>pq;
    queue<int>q;
    set<int>s;
    int count = 0;

    for (int i=0; i<n; i++) {
        cin >> x;
        if (x==1){
            cin >> x;
            pq.push({x, -count});
            q.push(count++);
        }else if (x == 2){
            while(s.find(q.front()) != s.end()){
                q.pop();
            }
            cout << q.front() + 1 << " ";
            s.insert(q.front());
            q.pop();
        }else{
            while(s.find(-pq.top().second) != s.end()){
                pq.pop();
            }
            cout << -pq.top().second + 1  << " ";
            s.insert(-pq.top().second);
            pq.pop();
        }
    }
}