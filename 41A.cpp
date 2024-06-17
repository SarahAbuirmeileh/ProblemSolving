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

    string str1, str2;
    cin >> str1 >> str2;

    int len = str1.length();

    for (int i = 0; i < len; i++){
        if(str1[i] != str2[len - 1 - i]){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
    
}