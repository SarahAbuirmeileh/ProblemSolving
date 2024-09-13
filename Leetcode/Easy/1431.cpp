class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_element = candies[0], size = candies.size();
        for(int i = 1; i < size; i++){
            if(candies[i] > max_element){
                max_element = candies[i];
            }
        }

        vector<bool>is_max(size);
        for(int i = 0; i < size; i++){
            is_max[i] = (candies[i] + extraCandies >= max_element);
        }
        return is_max;
    }   
};