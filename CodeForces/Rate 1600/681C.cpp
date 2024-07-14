#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void solve();
int32_t main() {
    tee
    int t=1;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    int n; cin >> n;
    string str;

    priority_queue<int, vector<int>, greater<int>> pq;
    vector<string>ans;

    int x;
    while(n--){
        cin >> str;

        if(str[0] == 'i'){
            cin >> x;
            pq.push(x);
            str += (" " + to_string(x));
        }else if (str[0] == 'g'){
            cin >> x;
            if (pq.empty()){
                pq.push(x);
                ans.push_back("insert " + to_string(x));
            }else{
  
                while(!pq.empty() &&  pq.top() < x){
                    ans.push_back("removeMin");
                    pq.pop();
                }
                if (pq.top() != x || pq.empty()){
                    ans.push_back("insert " + to_string(x));
                    pq.push(x);
                }
            }
            str += (" " + to_string(x));
        }else{
            if (pq.empty()){
                ans.push_back("insert 0");
            }else{
                pq.pop();
            }
        }
        ans.push_back(str);
    }

    cout << ans.size() << endl;
    for (auto a : ans){
        cout << a << endl;
    }
}