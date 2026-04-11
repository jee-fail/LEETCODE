class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        // int temp=0;
        for(int i=0; i<nums.size();i++){
            if( nums[i]!=0){
                swap(nums[j],nums[i]);
                // temp=nums[j];
                // nums[j]=nums[i];
                // nums[i]=temp;
                j++;
            }
        }
        return;
    }
};
