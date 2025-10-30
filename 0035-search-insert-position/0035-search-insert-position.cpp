class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1, mid;
        while(s<=e){
            mid = (e+s)/2;
            e = (nums[mid]>target)? mid-1: e;
            if(nums[mid]==target){
                return mid;
            }
            s = (nums[mid]<target)? mid+1: s;
        }
        while(mid<nums.size()&&nums[mid]<target){
            mid++;
        }
        return mid;
    }
};