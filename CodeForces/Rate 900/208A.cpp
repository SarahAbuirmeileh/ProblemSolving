#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define not_less_than(v, x) lower_bound(v.begin(), v. end(), x)                   // x >=
#define not_more_than(v, x) lower_bound(v.rbegin(), v.rend(), x, greater<int>())  // x <=
#define more_than(v, x) upper_bound (v.begin(), v.end(), x)                       // x <
#define less_than(v, x)upper_bound (v. rbegin(), v.rend(), x, greater<int>())     // x >

const int dx[] = { 0,0,1,-1 };
const int dy[] = { 1,-1,0,0 };

void solve();
int32_t main() {
    tee
    // #ifndef ONLINE_JUDGE 
    //     freopen("input.txt", "r", stdin); 
    //     freopen("output.txt", "w", stdout); 
    // #endif 
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}

void solve(){
    string s, str="WUB"; 
    cin >> s;
    while (s.find(str) >=0 && s.find(str)<s.size()){
        if (s.find(str)!=0 && s[s.find(str)+1] !=' ') {
             s.insert(s.find(str)," ");
        }
        s.erase(s.find(str),3);
    }
    for (int i=0; i<s.size(); i++){
        if (s[0]!=' ' || (s[i]==' ' && s[i+1]!=' '))
        cout << s[i];
    }
}