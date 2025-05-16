class Solution {
public:
    int majorityElement(vector<int>& nums) {
        const int n = nums.size();
        int result = 0;
        for(int bit=0; bit<32; bit++){
            int count = 0;
            for(int num:nums){
                if(num&(1<<bit)){
                    count++;
                }
            }
            if(count>n/2){
                result |= (1<<bit);
            }
        }
        return result;
    }
};