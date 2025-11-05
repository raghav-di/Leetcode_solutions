class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1, m;
        while(s<=e){
            m = (e+s)/2;
            if(nums[m]==target){
                return true;
            }
            else if(nums[m] == nums[s] && nums[m] == nums[e])
            {
                s++;
                e--;
            }
            else if(nums[s]<=nums[m]){
                if(nums[s]<=target&&target<=nums[m]){
                    e = m-1;
                }
                else{
                    s = m+1;
                }
            }
            else{
                if(nums[m]<=target&&target<=nums[e]){
                    s = m+1;
                }
                else{
                    e = m-1;
                }
            }
        }
        return false;
    }
};