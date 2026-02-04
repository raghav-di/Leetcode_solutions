class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max, count = 0;
        for(int e: nums){
            if(e == 1) count++;
            else count = 0;

            if(max < count) max = count;
        }
        return max;
    }
};