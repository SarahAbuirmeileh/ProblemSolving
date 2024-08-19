class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* cur = root;
        TreeNode* newNode = new TreeNode(val);
        while(cur){
            if(cur->val < val){
                if(cur->right){
                    cur = cur->right;
                }else{
                    cur->right = newNode;
                    return root;
                }
            }else {
                if(cur->left){
                    cur = cur->left;
                }else{
                    cur->left = newNode;
                    return root;
                }
            }
        }
        return newNode; //Empty tree
    }
};