class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i<nums.size(); i++){
            int j = i+1, k = nums.size()-1, t = nums[i];
            if(i != 0 && nums[i] == nums[i-1]){
                continue;
            }
            while(j<k){
                if(nums[j]+nums[k]+t == 0){
                    vector<int> res = {nums[i],nums[j],nums[k]};
                    ans.push_back(res);
                    j++;
                    while(nums[j] == nums[j-1] && j<k){
                        j++;
                    }
                }
                else if(nums[j]+nums[k]+t < 0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};