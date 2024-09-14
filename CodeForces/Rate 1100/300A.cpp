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

    int n; cin >> n;

    int pos = 0, neg = 0;
    set<int> positive, negative , zero;

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x; 
        if(x == 0){
            zero.insert(x);
        }else if (x > 0){
            pos++;
            positive.insert(x);
        }else{
            neg++;
            negative.insert(x);
        }
    }
    
    if(pos == 0){
        int counter = 2;
        auto neg_it = negative.begin();
        while(counter--){
            positive.insert(*neg_it);
            neg_it = negative.erase(neg_it);
        }
    }

    if(neg%2 == 0){
        auto neg_it = negative.begin();
        zero.insert(*neg_it);
        negative.erase(neg_it);
    }

    cout << negative.size() << " ";
    for(auto num : negative){
        cout << num << " "; 
    }

    cout << endl  << positive.size() << " ";
    for(auto num : positive){
        cout << num << " "; 
    }

    cout << endl << zero.size() << " ";
    for(auto num : zero){
        cout << num << " "; 
    }
}