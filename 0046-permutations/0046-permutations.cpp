class Solution {
    void perm(vector<vector<int>>& ans,vector<int> nums,int idx){
        if(idx>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            perm(ans,nums,idx+1);
            swap(nums[idx],nums[i]);
        }
            
        
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;

        perm(ans,nums,0);

        return ans;
    }
};