class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int sum=0;

        for( auto it : cost){
            sum+=it;
        }
        for( int i= cost.size()-3; i>=0; i-=3){
                sum-=cost[i];
        }
        return sum;
    }
};
