class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        if(prices.size()<=1){
            return 0;
        }
        if(prices.size()==2){
            profit=(prices[1]-prices[0]>profit)?(prices[1]-prices[0]):0;
            return profit;
        }

        int min=prices[0];
        int max=prices[0];
        int j=1;

        for(int i=1;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
                if(j<prices.size()-1){
                    j=i+1;
                }
            }
            cout<<j;
            max=prices[j];
            if(j<prices.size()-1){
                j++;
            }
            profit=((max-min)>profit)?(max-min):profit;
        }
        return profit;
    }
};