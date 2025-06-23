class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0;
        int end = nums.size()-1;
        int max;
        while(end!=0){
            for(int i = end-1; i>=0; i--){
                if(nums[i]>=end-i){
                    max=i;
                }
            }
            jump++;
            end = max;
        }
        return jump;
    }
};