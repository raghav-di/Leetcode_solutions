class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int num = 0;
        for(int e: nums){
            num = num^e;
        }
        return num;
    }
};