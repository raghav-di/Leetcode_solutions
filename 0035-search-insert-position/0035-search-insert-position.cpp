class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1, mid;
        while(s<=e){
            mid = (e+s)/2;
            // e = (nums[mid]>target)? mid: e;
            if(nums[mid]==target){
                return mid;
            }
            // s = (nums[mid]<target)? mid: s;
            else if(nums[mid]>target){
                e = mid-1;
                cout<<"e";
            }
            else{
                s = mid+1;
                cout<<"s";
            }
            cout<<mid<<" ";
        }
        // if(nums[mid]>target){
        //     // if(mid>0){
        //         return mid;
        //     // }
        // }
        while(mid<nums.size()&&nums[mid]<target){
            // if(mid){
                mid++;
            // }
            // else{
            //     mid--;
            // }
        }
        return mid;
    }
};