class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size(), size2 = nums2.size();
        set<int>s1, s2;
        for(int i = 0; i < size1; i++){
            s1.insert(nums1[i]);
        }

        vector<int>answer1, answer2;
        for(int i = 0; i < size2; i++){
            s2.insert(nums2[i]);
        }

        for(auto it : s1){
            if(!s2.count(it)){
                answer2.push_back(it);
            }
        }
        for(auto it : s2){
            if(!s1.count(it)){
                answer1.push_back(it);
            }
        }
        return {answer2, answer1};
    }
};