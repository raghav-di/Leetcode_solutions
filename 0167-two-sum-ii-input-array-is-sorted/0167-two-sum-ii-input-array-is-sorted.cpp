class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int s = 0, e = numbers.size()-1;
        while(s<=e){
            int m = (s+e)/2;
            if((target==numbers[s]+numbers[e])&&s!=e){
                res.push_back(s+1);
                res.push_back(e+1);
                return res;
            }
            else if(target<numbers[s]+numbers[e]){
                e--;
            }
            else{
                s++;
            }
        }
        return res;
    }
};