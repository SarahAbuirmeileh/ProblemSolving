class Solution {
public:
    int compress(vector<char>& chars) {
        int size = chars.size();
        string s = "";
        map<char, int>m; m[chars[0]]++;

        for(int i = 1; i < size; i++){
            m[chars[i]]++;
            if(chars[i] != chars[i - 1]){
                s += chars[i - 1];
                if(m[chars[i - 1]] > 1){
                    s += to_string(m[chars[i - 1]]) ;
                }
                m[chars[i - 1]] = 0;
            }
        }
        s += chars[size - 1];
                if(m[chars[size - 1]] > 1){
                    s += to_string(m[chars[size - 1]]) ;
                }  
        int size2 = s.size();
        for(int i = 0; i < size2; i++){
            chars[i] = s[i];
        }
        return size2;
    }
};