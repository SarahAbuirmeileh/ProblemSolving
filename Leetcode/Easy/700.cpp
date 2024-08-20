class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* cur = root;
        while(cur){
            if(cur->val == val){
                return cur;
            }
            if(cur->val < val){
                cur = cur->right;
            }else{
                cur = cur->left;
            }
        }
        return NULL;
    }
};