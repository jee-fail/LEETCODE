class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {


        // using STL or we can also use stable sort using stable_sort() function
        // M1
        // sort( nums.begin(), nums.end());
        stable_sort(nums.begin(), nums.end());
        // M2
        return nums;

        // insertion sort (M1)




    }
};
