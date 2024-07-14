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

    int n; cin >> n;
    string str; cin >> str;

    int a = 0, d = 0;
    for (int i = 0; i < n; i++){
        if(str[i] == 'A')a++;
        else d++;
    }
    
    if (a  >d){
        cout << "Anton";
    }else if (d > a){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }
}