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
    string word = "heidi";

    int it = 0;

    for (int i = 0; i < str.size() && it <word.size(); i++){
        if(str[i] == word[it]){
            it++;
        }
    }
    if (it >= word.size()){
        cout << "YES";
    }else{

        cout << "NO";   
    }
}