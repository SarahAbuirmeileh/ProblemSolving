class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int>m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int ans =0;
        for (auto mm : m){
            if(mm.second>1){
                ans += mm.second * (mm.second -1) /2;
            }
        }
        return ans;
    }
};

// OR

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int>m;
        for(int i=0; i<nums.size(); i++){
            if(m[nums[i]]){
                m[nums[i]]+=m[nums[i]];
            }else{
                m[nums[i]]=1;
            }
            
        }
        int ans =0;
        for (auto mm : m){
            ans += mm.second;
        }
        return ans;
    }
};