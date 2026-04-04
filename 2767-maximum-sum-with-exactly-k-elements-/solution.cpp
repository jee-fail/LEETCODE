class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxx=INT_MIN;//-1e9;
        int n=nums.size();
        for(int i=0;i<n;++i){
            maxx=max(maxx,nums[i]);
        }
        return maxx*k+(k*(k-1))/2;
    }
};
