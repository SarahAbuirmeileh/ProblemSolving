class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt = max(0, gain[0]);
        int size = gain.size();
        int sum  = 0;
        for(int i = 0; i < size; i++){
            sum += gain[i];
            max_alt = max(max_alt, sum);
        }
        return max_alt;
    }
};