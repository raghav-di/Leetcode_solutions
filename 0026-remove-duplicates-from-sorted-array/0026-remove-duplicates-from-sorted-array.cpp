class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1){
            return nums.size();
        }
        int i=0;
        int j=1;
        bool flag=true;

        while(i<nums.size()&&j<nums.size()){
            if(nums[i]==nums[j]){
                while(j<nums.size()&&nums[i]==nums[j]){
                    j++;
                }
                i++;
                if(j<nums.size()){
                    nums[i]=nums[j];
                }
                flag=false;
            }
            else{
                i++;
                j++;
            }
        }
        if(flag) i++;
        return i;
    }
};