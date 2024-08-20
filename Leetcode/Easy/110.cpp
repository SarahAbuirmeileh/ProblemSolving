class Solution {
public:

    int getHight(TreeNode* root){
        if(!root){
            return 0;
        }
        int l = getHight(root->left);
        int r = getHight(root->right);
        return max(l, r)+1;
    }

    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        if(abs(getHight(root->left)-getHight(root->right))>1){
            return false;
        }
        return isBalanced(root->right) && isBalanced(root->left);
    }
};