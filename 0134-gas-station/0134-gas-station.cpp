class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasPresent = 0;
        int total = 0;
        int start = 0;
        for(int i = 0; i<gas.size(); i++){
            gasPresent += gas[i]-cost[i];
            total += gas[i]-cost[i];
            if(gasPresent<0){
                gasPresent = 0;
                start = i+1;
            }
        }
        return total<0? -1:start;
    }
};
