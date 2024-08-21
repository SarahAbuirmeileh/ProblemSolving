class Solution {
private:
    TreeNode* f = NULL;
    TreeNode* s = NULL;
    TreeNode* prev = NULL;

public:
    void inOrder(TreeNode* root){
        if(!root)return;
        inOrder(root->left);

        if(prev && root->val < prev->val){
            if(!f){
                f = prev;
            }
            s = root;
        }
        prev = root;

        inOrder(root->right);

    }

    void recoverTree(TreeNode* root) {
        inOrder(root);
        swap(f->val, s->val);
    }
};