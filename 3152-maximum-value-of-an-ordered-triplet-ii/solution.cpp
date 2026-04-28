class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>preMax(n);
        vector<int>suffMax(n);
        preMax[0]=nums[0];
        suffMax[n-1]=nums[n-1];
        for( int i=1; i<nums.size(); i++){
            preMax[i]=max(preMax[i-1], nums[i]);
        }
        for ( int i=n-2; i>0; i--){
            suffMax[i]=max(suffMax[i+1],nums[i]);
        }
        long long  tripletMax=0;
        for ( int j=1; j<n-1; j++){
            int leftMax=preMax[j-1];
            int rightMax=suffMax[j+1];

            long long ValueMax= 1LL*(leftMax-nums[j])*rightMax;
            tripletMax= max(tripletMax,ValueMax);
        }
        return tripletMax;


    }
};
