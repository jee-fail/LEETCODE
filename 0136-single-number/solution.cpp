// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++){
//             int count = 0;
//             for(int j = 0; j < nums.size(); j++){
//                 if(nums[i] == nums[j]){
//                     count++; // if count =2 it means there is double 
//                 }
//             }
//             if(count == 1){   //if count is single it means onel
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };


// use xor opertion on it like 
// 0^a=a and a^a=0
// iff it occour two time it cancel out otherwise return that value
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans ^= nums[i];
        }
        return ans;
    }
};
