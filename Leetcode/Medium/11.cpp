class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0, area;
        int l = 0, r = height.size()-1;

        while(l<r){
            area = (r-l)*min(height[l], height[r]);
            max_area = max(max_area, area);
            if(height[l] < height[r] ){
                l++;
            }else{
                r--;
            }
        }
        return max_area;
    }
};