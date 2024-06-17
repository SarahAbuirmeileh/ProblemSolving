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

    int size = str1.size() ;

    for (int i = 0; i < size; i++){
        if(tolower(str1[i])  < tolower(str2[i])){
            cout << -1;
            return;
        }else if ( tolower(str2[i]) < tolower(str1[i])){
            cout << 1 ;
            return;
        }
    }

    cout << 0;
    
}