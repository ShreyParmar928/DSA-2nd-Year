
class Solution {
public:
    vector<int> res;
    vector<int> postorderTraversal(TreeNode* root) {
            if(root){
              postorderTraversal(root->left);
              postorderTraversal(root->right);
              res.push_back(root->val);
            }

        return res;
    }
};
