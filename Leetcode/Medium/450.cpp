class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root){
            return NULL;
        }

        if(root->val < key){
            root->right=deleteNode(root->right, key);
        }else if(root->val > key){
            root->left = deleteNode(root->left, key);
        }else{
            if(!root->left && !root->right){
                return NULL;
            }else if(!root->left){
                return root->right;
            }else if(!root->right){
                return root->left;
            }

            TreeNode* cur = root->right;
            while(cur && cur->left){
                cur = cur->left;
            }
            root->val = cur->val;
            root->right = deleteNode(root->right, cur->val);
        }
        return root;
    }
};