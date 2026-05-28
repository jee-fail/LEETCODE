class Solution {
public:
    int lower_bound(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1, ans=nums.size();
        while( low <=high){
            int mid=( low +high)/2;
            if ( nums[mid]>=target){
                ans=mid;
                high=mid-1;

            }else
            low=mid+1;
        }
        return ans;
    }

        int upper_bound(vector<int>& nums, int target){
        int low=0, high=nums.size()-1, ans=nums.size();
        while( low <=high){
            int mid=( low +high)/2;
            if ( nums[mid]>target){
                ans=mid;
                high=mid-1;

            }else
            low=mid+1;
        }
        return ans;
    }
        vector<int> searchRange(vector<int>& nums, int target){

            int first= lower_bound( nums, target);
            if(first== nums.size() || nums[first]!= target)
            return {-1, -1};

        int last = upper_bound(nums, target)- 1;

        return {first, last};
    }
};
