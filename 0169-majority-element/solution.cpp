class Solution {
public:
    int majorityElement(vector<int>& nums) { 

        //m1 brute force method
        // int n=nums.size();
        // int ans=-1;
        // for(int i=0; i<n; i++){
        //     int count =0;
        //     for(int j=0; j<n;j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count>n/2) {
        //         ans= nums[i];
        //         break;
        //      }
        // }
        // return ans;


        // better solution using map
        // map<int, int>mpp;
        // for( int i = 0; i<nums.size(); i++){
        //     mpp[nums[i]]++;
        // }

        // for( auto it : mpp){
        //     if(it.second > nums.size()/2){
        //         return it.first;
        //     }
        // }
        // return -1;


        //m3 optimal

        // applying moores voting algo
        int count=0;
        int element;
        for(int i=0; i<nums.size(); i++){
            if(count==0){
                count=1;
                element=nums[i];
            }
            else if (nums[i]== element){
                count++;
            }
            else{
                count--;
            }
        } 
        int count1=0;
        for(int i=0; i<nums.size(); i++){
            if(element==nums[i]){
                count1++;
            }
            if(count1>nums.size()/2) return element;
        }
        return -1;
    }
};
