class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size()-1, m, res = nums[(e+s)/2];
        while(s<=e){
            m = (e+s)/2;
            if(nums[s]<=nums[m]&&nums[s]<=nums[e]){
                res = (res>nums[s])? nums[s]:res;
                e = m-1;
            }
            else if(nums[m]<=nums[s]&&nums[m]<=nums[e]){
                res = (res>nums[m])? nums[m]:res;
                e--;
                s++;
            }
            else if(nums[e]<=nums[m]&&nums[e]<=nums[s]){
                res = (res>nums[e])? nums[e]:res;
                s = m+1;
            }
        }
        return res;
    }
};