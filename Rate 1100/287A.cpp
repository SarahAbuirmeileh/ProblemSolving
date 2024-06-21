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

    char str[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> str[i][j];
        }
    }
    
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int b = (str[i][j] == '#') + (str[i][j+1] == '#') + (str[i+1][j] == '#') + (str[i+1][j+1] == '#');
            if(b != 2){
                cout << "YES";
                return;
            }
        }
    }

    cout << "NO";
}