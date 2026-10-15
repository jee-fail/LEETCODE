class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int sum=0;

        for(int i=0; i<n; i++){
            set<int> dist;
            for(int j=i; j<n; j++){
                dist.insert(nums[j]);
                int count = dist.size();
                sum+=count*count;
            }
        }
        return sum;
    }
};
