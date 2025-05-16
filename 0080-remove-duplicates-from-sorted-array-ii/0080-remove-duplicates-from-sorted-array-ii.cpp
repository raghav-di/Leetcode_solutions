class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s=nums.size();
        int k=2;
        if(s<=2){
            return s;
        }

        for(int i=2;i<s;i++){
            if(nums[k-2]!=nums[i]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};