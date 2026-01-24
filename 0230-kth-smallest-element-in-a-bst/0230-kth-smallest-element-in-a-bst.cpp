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
    void findk(TreeNode* root, int &k, int &n){
        if(!root){
            return;
        }
        findk(root->left, k, n);
        k--;
        if(k == 0){
            n = root->val;
            
        }findk(root->right, k ,n);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int n = 0;
        findk(root, k, n);
        return n;
        // if(root->left){
        //     root = root->left;
        //     k--;
        //     if(k > 0){
        //         n = root->val;
        //         return;
        //     }
        // }
        // else{
            
        // }
        
    }
};