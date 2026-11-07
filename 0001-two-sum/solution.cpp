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


    // better sol USING HASHING ----and this is optimal one
    // map<int, int> mpp;
    //     for ( int i=0; i<nums.size(); i++){
    //         int a=nums[i];
    //         int need=target-a;
    //         if(mpp.find(need)!=mpp.end()){
    //             return {mpp[need],i};
    //         }
    //         else{
    //             mpp[a]=i;
    //         }
    //     }
    //     return {-1,-1};


    // optimal solution

    vector<pair<int, int>> arr;

        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            int sum = arr[left].first + arr[right].first;

            if (sum == target) {
                return {arr[left].second, arr[right].second};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {-1, -1};
    }
};
