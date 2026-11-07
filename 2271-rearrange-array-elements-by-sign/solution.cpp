class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        //brute force 
        // vector<int> pos;
        // vector<int> neg;
        // for ( int i=0; i< nums.size(); i++){
        //     if(nums[i]<0){
        //         neg.push_back(nums[i]);
        //     }
        //     else
        //     pos.push_back(nums[i]);
        // }
        // for( int i=0; i< nums.size()/2 ; i++){
        //     nums[2*i]=pos[i];
        //     nums[2*i+1]=neg[i];
        // }
        // return nums;


        // now dont want to store positive and negative at other place 
        // int pos=0; 
        // int neg=1;
        // vector<int > ans(nums.size(),0);
        // for ( int i=0; i< nums.size(); i++){
        //     if(nums[i]>=0){
        //         ans[pos]=nums[i];
        //         pos+=2;
        //     }
        //     else{
        //         ans[neg]=nums[i];
        //         neg+=2;
        //     }
        // }
        // return ans;

        int pos=0; 
        int neg=1;
        vector<int> ans(nums.size(),0);
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=0){
                ans[pos]=nums[i];
                pos+=2;
            }else{
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return ans;
    }
};
