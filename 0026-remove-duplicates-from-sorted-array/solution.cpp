// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int i=0 ,j=1;
//         for(j=1; j<nums.size(); j++){
//             if(nums[i]!=nums[j]){
//                 // independent from everything
//                 i++;
//                 nums[i]=nums[j];

//                 // m2 preincrement method
//                 // nums[++i]=nums[j]; 
//             }
//         }
//         return i+1;
//     }
// };


// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {

//         int k = 1;

//         for(int i = 1; i < nums.size(); i++) {

//             if(nums[i] != nums[i - 1]) {
//                 nums[k] = nums[i];
//                 k++;
//             }
//         }

//         return k;
//     }
// };



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        auto it = unique(nums.begin(), nums.end());

        nums.erase(it, nums.end());

        return nums.size();
    }
};
