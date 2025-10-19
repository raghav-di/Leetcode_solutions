class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i = 1; i<=nums.size(); i++){
            m[i] = 0;
        }
        for(int i = 1; i<=nums.size(); i++){
            m[nums[i-1]]++;
            cout<<nums[i-1]<<":"<<m[nums[i-1]];
            if(m[nums[i-1]]>1){
                ans.push_back(nums[i-1]);
            }
        }
        for(int i = 1; i<=nums.size(); i++){
            if(m[i] == 0){
                ans.push_back(i);
                return ans;
            }
        }
        return ans;
    }
};