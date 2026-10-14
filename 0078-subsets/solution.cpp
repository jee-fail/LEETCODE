class Solution {
public:

    // brute force
    // vector<vector<int>> subsets(vector<int>& nums) {
    //     int n=nums.size();
    //     vector<vector<int>> ans;

    //     for( int mask=0; mask< ( 1<< n); mask++){
    //         vector<int> subset;

    //         for( int i=0; i< n; i++){
    //             if( mask & ( 1<<i)){
    //                 subset.push_back(nums[i]);
    //             }
    //         }
    //         ans.push_back(subset);
    //     }
    //     return ans;


    // backtracking

    // void solve( vector< int>& nums , int index, vector<int>& curr , vector<vector<int>>& ans){
    //     if( index== nums.size()){
    //         ans.push_back(curr);
    //         return ;
    //     }

    //     curr.push_back(nums[index]);
    //     solve(nums, index+1, curr, ans); // push the current element

    //     curr.pop_back();

    //     solve(nums, index+1, curr, ans); // exclude the current element
    // }

    // vector<vector<int>> subsets(vector<int>& nums) {
    //     vector<vector<int>> ans;
    //     vector<int> curr;

    //     solve(nums, 0, curr, ans);
    //     return ans;
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans= {{}};

        for( int num : nums){
            int size= ans.size();

            for(int i=0 ; i< size; i++){
                vector<int> subset = ans[i];
                subset.push_back(num);
                ans.push_back(subset);
            }
        }
        return ans;
    }
};
