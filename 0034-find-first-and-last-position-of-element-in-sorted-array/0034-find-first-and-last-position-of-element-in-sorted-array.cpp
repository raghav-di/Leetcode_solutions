class Solution {
    int search(vector<int> nums, int x, int s, int e, bool left){
        int m, idx=-1;
        while(s<=e){
            m = (s+e)/2;
            
            if(nums[m]>x){
                e = m-1;
            }
            else if(nums[m]<x){
                s = m+1;
            }
            else{
                idx = m;
                if (left){
                    e = m - 1;
                } 
                else{
                    s = m + 1;
                }
            }
        }
        return idx;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        int s = 0, e = nums.size()-1, m;
        // if(e==-1){
        //     return ans;
        // }

        int l = search(nums, target, s, e, true);
        int r = search(nums, target, s, e, false);
        ans[0] = l;
        ans[1] = r;
        return ans;
    }
};