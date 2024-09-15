class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index = 0;
        int size_s = s.size();
        for(int i = 0; i < t.size(); i++){
            if(t[i] == s[index]){
                if(index < size_s){
                    index++;
                }
            }
        }
        return index == size_s ;
    }  
};