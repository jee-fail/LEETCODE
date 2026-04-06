class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans=1e9;
        for(int i=0 ;i<nums.size();i++){
            if(nums[i]==target){
                
                 //m1.   if(ans>abs(i-start)){
                //   ans = abs(i-start);

                //m2.   ans=min(ans,abs(i-start)); 

                //m3.  without using abs function 
                int temp= ( start >i)?(start -i):(i-start);
                ans=min(ans,temp);
            }
        }
        return ans;
    }
};
