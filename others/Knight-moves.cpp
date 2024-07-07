#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }


void solve(string s, string t); 

int32_t main() {
    tee
    
    string s, t;
    while(cin >> s >> t){
        solve(s, t); 
    }
    return 0;
}

int BFS(string s, string t){
    vector<pair<int, int>> dis = { {1, 2}, {-1, 2}, {1, -2}, {-1, -2}, 
                                   {2, 1}, {-2, 1}, {2, -1}, {-2, -1} };
    vector<vector<int>> d(8, vector<int>(8, -1));

    int sc = s[0] - 'a', sr = s[1] - '1';
    int tc = t[0] - 'a', tr = t[1] - '1';

    queue<pair<int, int>> q;
    q.push({sr, sc}); 
    d[sr][sc] = 0;

    int r, c;
    while(!q.empty()){
        pair<int, int> cur = q.front(); q.pop();
        r = cur.first, c = cur.second;

        if(r == tr && c == tc) {
            return d[r][c];
        }

        for(int i = 0; i < 8; i++){
            int nr = r + dis[i].first, nc = c + dis[i].second;
            if(nr >= 0 && nr < 8 && nc >= 0 && nc < 8){
                if(d[nr][nc] == -1){
                    d[nr][nc] = d[r][c] + 1; 
                    q.push({nr, nc});
                }
            }
        }
    }
    return -1;
}

void solve(string s, string t){
    cout << "To get from " << s << " to " << t << " takes " << BFS(s, t) << " knight moves." << endl;
}
