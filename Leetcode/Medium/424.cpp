class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>m;
        int size =0, maxi = 0;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
            maxi = max(maxi, m[s[i]]);
            if(size - maxi < k){
                size++;
            }else{
                m[s[i - size]]--;
            }
        }
        return size;
    }
};