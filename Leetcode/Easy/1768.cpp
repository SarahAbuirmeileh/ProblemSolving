
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int s1 = word1.size(), s2=word2.size();
        int s = min(s1,s2 ) ;
        for(int i=0; i<s; i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        ans+= word1.substr(s);
        ans+= word2.substr(s);
        return ans;
    }
};