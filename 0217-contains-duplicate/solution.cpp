class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // this is brute force method ...cant run here give TLE
        // for(int i=0; i<nums.size();i++){
        //     int count=0;
        //     for(int j=0; j<nums.size();++j){
        //         if(nums[j]==nums[i]){
        //             count++;
        //         }
        //     }
        //     if(count >=2 ){
        //     return true;
        //     }
        // }
        // return false;



        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if( nums[i] == nums[i-1]){ //at least one time 
                return true;
            }
        }
        return false;

    }
};
