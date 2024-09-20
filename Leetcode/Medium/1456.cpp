class Solution {
public:
    int maxVowels(string s, int k) {
        double sum_vowels = 0, size = s.size();
        for(int i = 0; i < k; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                sum_vowels++;
            }
        }
        double max_vowels = sum_vowels;
        
        for(int i = k; i < size; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                sum_vowels++;
            }
            if(s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u'){
                sum_vowels--;
            }

            max_vowels = max(max_vowels, sum_vowels);
        }
        return max_vowels;
    }
};
