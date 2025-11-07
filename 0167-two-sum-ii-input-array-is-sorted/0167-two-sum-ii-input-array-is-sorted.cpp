class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        for(int i = 0; i<numbers.size(); i++){
            int n = target-numbers[i], s = 0, e = numbers.size()-1;
            while(s<=e){
                int m = (s+e)/2;
                if(n==numbers[m]&&i!=m){
                    res.push_back(i+1);
                    res.push_back(m+1);
                    return res;
                }
                else if(n<numbers[m]){
                    e = m-1;
                }
                else{
                    s = m+1;
                }
            }
        }
        return res;
    }
};