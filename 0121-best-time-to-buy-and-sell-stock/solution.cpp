class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minimal=prices[0]; // buying price on left
        for ( int i=1 ; i<prices.size(); i++){ //selling loop
            int gain=prices[i]- minimal;
            maxprofit=max(maxprofit, gain);
            minimal=min(minimal, prices[i]);
        }
        return maxprofit;
    }
};
