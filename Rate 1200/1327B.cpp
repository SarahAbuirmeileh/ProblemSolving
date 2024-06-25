#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void solve();
int32_t main() 
{
    tee
    int t=1; cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}
void solve(){
    int n; cin >>n;
    set<int>d,k;int add;
    for (int i=0; i<n; i++){
        int x; cin >>x;
        set<int>s;
        for (int i=0; i<x; i++){
            int a; cin >>a;
            s.insert(a);
        }
        bool can =0; 
        for (auto it : s){
            if (!k.count(it)){
                d.insert(i+1);k.insert(it);can=1;break; 
            } 
        }
        if (!can)add=i+1;
    }
    if (k.size()==n)cout <<"OPTIMAL"<<endl;
    else {
        cout << "IMPROVE" << endl << add <<" ";
        int b=1;
        while (b<=n){
            if (!k.count(b)){
                cout << b << endl; return;
            }b++;
        }
    }
}