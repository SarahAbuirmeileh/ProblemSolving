class Solution {
public:

    void flatten(TreeNode* root) {
        TreeNode* cur = root;
        while(root){
            TreeNode* right = root->right;
            root->right = root->left;
            root->left = NULL;
            cur = root;
            while(cur->right){
                cur = cur->right;
            }
            cur->right = right;
            root = root->right;
        }
    }
};