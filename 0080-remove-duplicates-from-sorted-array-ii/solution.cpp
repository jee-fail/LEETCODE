class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int i=0;
        for( int j=1; j<nums.size();j++){
            if (nums[i]==nums[j] && count==0){
                i++;
                nums[i]=nums[j];
                count+=1;
            }else if( nums[i]!=nums[j]){
                count=0;
                i++;
                nums[i]=nums[j];
            }
            else if (count>0){
                continue;
            }
            
        }
        return i+1;
    }
};
