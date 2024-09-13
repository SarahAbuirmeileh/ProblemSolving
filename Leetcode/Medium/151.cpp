class Solution {
public:
    string reverseWords(string str) {
        stack<string>s;
        string word = "";
        int size = str.size();
        for(int i = 0; i < size; i++){
            if(str[i] != ' '){
                word += str[i];
            }else if (word != ""){
                s.push(word);
                word = "";
            }
        }
        if(word != "") s.push(word);
        string reversed = s.top(); s.pop();
        while(!s.empty()){
            reversed += (" " + s.top()) ;
            s.pop();
        }
        return reversed;
    }
};