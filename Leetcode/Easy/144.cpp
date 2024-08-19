class Solution {
public:
    vector<int>ans;

    void preOrder(TreeNode* root){
        if(!root){
            return;
        }
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        preOrder(root);
        return ans;
    }
};