class Solution {
public:
    int atmost(vector<int>& nums, int goal) {
        int left=0, right=0, count=0,sum=0;

        if(goal<0) return 0;  // edge case

        while(right<nums.size()){
            sum+=nums[right];
            while(sum>goal){
                sum=sum-nums[left];
                left=left+1;
            }
            count=count +(right-left+1); // counting
            right=right+1;
        }
        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return  atmost(nums,goal)-atmost(nums,goal-1);
    }
};
