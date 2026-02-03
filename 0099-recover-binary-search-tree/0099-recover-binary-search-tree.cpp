/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode* prev = nullptr, *u = nullptr, *v = nullptr;
    void solve(TreeNode* root){
        if(!root) return;

        solve(root->left);
        if(prev && prev->val > root->val){
            u = root;
            if(!v) v = prev;
        }
        prev = root;
        solve(root->right);
    }
public:
    void recoverTree(TreeNode* root) {
        solve(root);
        swap(v->val, u->val);
    }
};