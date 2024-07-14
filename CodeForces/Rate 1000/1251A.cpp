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

    string str; cin >>str;
    vector<char>v;
    set<char>s;

    for (int i=0; i<str.size(); i++){
        int count =0;
        for(int j =i; j<str.size(); j++){
            if(str[j]==str[i]){
                count++;
            }else{
                break;
            }
        }
        if(count%2){
            if(!s.count(str[i])){
                s.insert(str[i]);
                v.push_back(str[i]);
            }
        }
        i += count-1;
    }
    
    sort(v.begin(), v.end());
    for (int i=0; i<v.size(); i++){
        cout << v[i];
    }
    cout << endl;
}