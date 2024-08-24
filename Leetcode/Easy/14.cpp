class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i =0;
        while(true){
            for( int j=0; j<strs.size(); j++){
                if(strs[j].size() <= i || strs[j][i] != strs[0][i]){
                    return ans;
                }
            }
            ans += strs[0][i++];
        }
        return ans;
    }
};