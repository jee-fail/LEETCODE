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



// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {

//         auto it = unique(nums.begin(), nums.end()); //move the unique element in front keeping duplicate at last aslo itertor will point next to the unique element

//         nums.erase(it, nums.end()); // from etertor element will get deleted

//         return nums.size();
//     }
// };

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        vector<int> ans;
        ans.push_back(nums[0]);

        for( int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
        nums=ans;
        return nums.size();
    }
};
