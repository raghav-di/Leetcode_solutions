class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        unordered_map<int,int> map;
        for(int i = 1; i<nums.size()+1; i++){
            if(!map.contains(i)) map[i] = 0;

            if(map.contains(nums[i-1])){
                map[nums[i-1]]++;
            }
            else{
                map[nums[i-1]] = 1;
            }
        }
        for(const auto& [key,val]: map){
            if(map[key] == 2) ans[0] = key;
            if(map[key] == 0) ans[1] = key;
        }
        return ans;
    }
};