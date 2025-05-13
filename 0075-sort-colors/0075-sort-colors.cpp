class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> count={{0,0},{1,0},{2,0}};
        for(int e:nums){
            count[e]++;
        }

        int idx=0;
        for(int i=0;i<=2;i++){
            for(int j=0;j<count[i];j++){
                nums[idx]=i;
                idx++;
            }
        }
    }
};