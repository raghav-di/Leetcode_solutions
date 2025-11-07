class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0, e = nums.size()-1, m = (s+e)/2, res = nums[m], idx = m;
        while(s<=e){
            m = (s+e)/2;
            if(nums[s]>=nums[m]&&nums[s]>=nums[e]){
                idx = (res<nums[s])? s:idx;
                res = (res<nums[s])? nums[s]:res;
                e = m-1;
            }
            else if(nums[m]>=nums[s]&&nums[m]>=nums[e]){
                idx = (res<nums[m])? m:idx;
                res = (res<nums[m])? nums[m]:res;
                s++;
                e--;
            }
            else if(nums[e]>=nums[m]&&nums[e]>=nums[s]){
                idx = (res<nums[e])? e:idx;
                res = (res<nums[e])? nums[e]:res;
                s = m+1;
            }
        }
        return idx;
    }
};