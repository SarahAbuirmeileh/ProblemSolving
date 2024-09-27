class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        int size = s.size();

        for(int i = 0; i < size; i++){
            if(s[i] != '*'){
                st.push(s[i]);
            }else{
                st.pop();  
            }
        } 
        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};