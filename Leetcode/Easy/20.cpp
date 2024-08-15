class Solution {
public:
    bool isValid(string str) {
        stack<char>s;
        for(char ss : str){
            if(ss == '(' || ss == '{' || ss == '['){
                s.push(ss);
            }else if(ss == ')'){
                if(!s.empty() && s.top() == '('){
                    s.pop();
                }else{
                    return false;
                }
            }else if(ss == '}'){
                if(!s.empty() && s.top() == '{'){
                    s.pop();
                }else{
                    return false;
                }
            }else if(ss == ']'){
                if(!s.empty() && s.top() == '['){
                    s.pop();
                }else{
                    return false;
                }
            }     
        }
        return s.empty();
    }
};