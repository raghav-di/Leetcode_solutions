class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=nums[0];
        int sum=0;

        for(int e:nums){
            if(sum<0){
                sum=0;
            }
            sum+=e;
            max=(max<sum)?sum:max;
        }
        return max;
    }
};