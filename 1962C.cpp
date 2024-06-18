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
    cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    char board [8][8];

    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            cin >> board[i][j];
        }
    }

    for (int i=1; i<8; i++){
        for (int j=1; j<8; j++){
            if(board[i][j]=='#'){
                if (board[i-1][j-1]=='#' && board[i-1][j+1]=='#' && board[i+1][j-1]=='#' && board[i+1][j+1]=='#'){
                    cout << i+1 << " " << j+1 << endl;
                    return;
                }
            }
        }
    }
}