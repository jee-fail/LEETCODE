class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // brute force
        // vector<int> ans;
        // for(int i=0; i<nums.size(); i++){
        //  // Avoid duplicate elements in ans:
        // // Proceed if ans is empty, or if nums[i] is not the same as the already found element (ans[0])
        //     if(ans.size()==0 || ans[0]!=nums[i]){
        //         int count = 0;
        //         for( int j=0; j<nums.size(); j++){
        //             if(nums[j]==nums[i]){
        //                 count++;
        //             }
        //         }
        //         if(count>nums.size()/3) {
        //             ans.push_back(nums[i]);
        //         }
        //         if(ans.size()==2) break;  // maximum it has two value
        //     }
        // }
        // return ans;


        // better solution using hashing technique
        // map<int,int> mpp;
        // vector<int> ans;
        // int minn=nums.size()/3 +1; //about occerence
        // for(int i=0; i<nums.size(); i++){
        //     mpp[nums[i]]++;
        //     if(mpp[nums[i]] == minn){
        //         ans.push_back(nums[i]);
        //     }
        //     if(ans.size()==2) break;
        // }
        // sort(ans.begin(), ans.end());
        // return ans;


        // optimal sol
        int count1=0,  count2=0;
        int el1=-1e9;
        int el2=-1e9;
        for(int i=0; i<nums.size(); i++){
            if(count1==0 && nums[i] != el2){
                count1=1;
                el1=nums[i];
            }else if(count2==0 && nums[i] != el1){
                count2=1;
                el2=nums[i];
            }else if(el1 ==nums[i]) count1++;
            else if (el2 == nums[i]) count2++;
            else{
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        count1=0; count2=0;
        for(int i=0; i<nums.size(); i++){
            if(el1 == nums[i]) count1++;
            if(el2== nums[i]) count2++;
        }
        int minn=(int)(nums.size()/3)+1;
        if(count1>=minn) ans.push_back(el1);
        if(count2>=minn) ans.push_back(el2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
