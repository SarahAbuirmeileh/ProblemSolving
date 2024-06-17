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

    string str; cin >> str;

    int low = 0, upp = 0;
    for (int i = 0; i < str.length(); i++){
        if (islower(str[i])){
            low++;
        }else{
            upp++;
        }
    }
    
    if(upp > low){
        for (int i = 0; i < str.length(); i++){
            str[i] = toupper(str[i]);
        }
    }else{
        for (int i = 0; i < str.length(); i++){
            str[i] = tolower(str[i]);
        }
    }

    cout << str;
}