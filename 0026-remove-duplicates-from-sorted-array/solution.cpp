class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0 ,j=1;
        for(j=1; j<nums.size(); j++){
            if(nums[i]!=nums[j]){
                // m1 i++;         // independent from everything 
                nums[++i]=nums[j]; // m2 preincrement method
            }
        }
        return i+1;
    }
};
