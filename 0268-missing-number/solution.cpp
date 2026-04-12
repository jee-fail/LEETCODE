class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int misvalue = nums.size();
        
        // sort(nums.begin(), nums.end());
        
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] != i){
        //         misvalue = i;
        //         break;
        //     }
        // }
        
        // return misvalue;


        int n = nums.size();
        int sum= n*(n+1)/2;
        int sum2=0;
        for( int i=0; i<nums.size();i++){
            sum2 += nums[i];
        }
        return sum-sum2;
    }
};


