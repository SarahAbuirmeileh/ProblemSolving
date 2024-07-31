class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1.size() < str2.size()) {
            swap(str1, str2);
        }
        
        string ans = str2;
        while (ans.size()) {
            int s = ans.size();
            if (str1.size() % s == 0 && str2.size() % s == 0) {
                string test1 = "", test2 = "";
                
                for (int i = 0; i < str1.size() / s; ++i) {
                    test1 += ans;
                }
                for (int i = 0; i < str2.size() / s; ++i) {
                    test2 += ans;
                }
                
                if (test1 == str1 && test2 == str2) {
                    return ans;
                }
            }
            ans = ans.substr(0, ans.size() - 1);
        }
        
        return "";
    }
};
