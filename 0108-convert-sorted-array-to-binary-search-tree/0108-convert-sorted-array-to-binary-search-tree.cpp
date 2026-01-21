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
public:
     TreeNode* makeTree(int s, int e, vector<int>& nums){
        if(s>e){
            return nullptr;
        }
        int m = (s+e)/2;
        TreeNode* head =  new TreeNode(nums[m]);
        head->left = makeTree(s, m-1, nums);
        head->right = makeTree(m+1, e, nums);

        return head;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s = 0, e = nums.size()-1;
        return makeTree(s , e, nums);
    }
};