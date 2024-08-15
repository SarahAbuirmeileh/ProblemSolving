class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans(n+m);

        int a =0, b =0, l, i;
        for( i=0; a < m && b <n; i++ ){
            if(nums1[a]<nums2[b]){
                ans[i] = nums1[a++];
            }else{
                ans[i] = nums2[b++];
            }
        }

        for(int j=i;  a <m; j++){
            ans[j]=nums1[a++];
        }
        for(int j=i;  b <n; j++){
            ans[j]=nums2[b++];
        }
        nums1=ans;
    }
};