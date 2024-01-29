class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = 0;
        int profit = 0;
        
        for(int i=1;i<prices.size();i++){
            cout<<i<<" "<<prices[i]<<" "<<low<<" "<<prices[low]<< endl;
            if(prices[i] < prices[low]){
                low = i;
            }
            if( 0 < prices[i]-prices[low]){
                profit+=prices[i]-prices[low];
                low = i;
            };
        }
        return profit;
    }
};
