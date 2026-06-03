class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;
        
        sort(nums.begin(),nums.end());


        int longest=1;
        int count=0;
        int n=nums.size();
        int lastSmaller=-1e9;

        for( int i=0; i<n; i++){
            if( nums[i]-1==lastSmaller){
                count++;
                lastSmaller=nums[i];
            }

            else if(nums[i]!=lastSmaller){
                count=1;
                lastSmaller=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
};
