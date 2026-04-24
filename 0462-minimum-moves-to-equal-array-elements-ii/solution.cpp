class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // for( int i=0; i<nums.size(); i++){
        //     cout<< nums[i] << " ";
        // }
        int n= nums.size();
        int median = nums[n/2];
        int totalMove=0;

        for( int i=0; i<nums.size(); i++){
            totalMove+= abs( nums[i]-median);
        }
        return totalMove;
    }
};
