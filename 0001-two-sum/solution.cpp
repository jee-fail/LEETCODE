class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


    // BRUTE FORCE
    //     for( int i=0; i< nums.size(); i++){
    //         for( int j=i+1; j< nums.size(); j++){
    //             if( target == ( nums[i]+ nums[j])){
    //                 return {i, j};
    //             }
    //         }
    //     }
    //     return {-1,-1};


    // OPTIMAL USING HASHING 
    map<int, int> mpp;
        for ( int i=0; i<nums.size(); i++){
            int a=nums[i];
            int need=target-a;
            if(mpp.find(need)!=mpp.end()){
                return {mpp[need],i};
            }
            else{
                mpp[a]=i;
            }
        }
        return {-1,-1};
    }
};
