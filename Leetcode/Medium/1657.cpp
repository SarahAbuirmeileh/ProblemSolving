class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int size1 = word1.size(), size2 = word2.size(); 
        map<char, int>freq1, freq2;
        set<char>chars1;
        for(int i  = 0; i < size1; i++){
            freq1[word1[i]]++;
            chars1.insert(word1[i]);
        }

        for(int i  = 0; i < size2; i++){
            freq2[word2[i]]++;
            if(!chars1.count(word2[i])){
                return false;
            }
        }

        if(freq1.size() != freq2.size()){
            return false;
        }

        map<int, int>freq_rep1, freq_rep2;
        for(auto freq : freq1){
            freq_rep1[freq.second]++;
        }

        for(auto freq : freq2){
            freq_rep2[freq.second]++;
        }

        for(auto freq : freq_rep1){
            if(freq_rep2[freq.first] != freq.second){
                return false;
            }
        }
        return true;
    }
};