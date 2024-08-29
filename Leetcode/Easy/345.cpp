class Solution {
public:
    string reverseVowels(string s) {
        vector<int>v;
        for(int i=0; i<s.size(); i++){
            if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i])== 'i' || tolower(s[i])=='o' || tolower(s[i])=='e' || tolower(s[i])=='u'){
                v.push_back(i);
            }
        }
        int l =0, r =v.size()-1;
        while(l<r){
            swap(s[v[l++]], s[v[r--]]);
        }
        return s;
    }
};