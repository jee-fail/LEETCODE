class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //brute force with n3
        // int maxx=-1e9;
        // int n=nums.size();
        // for(int i =0; i<n; i++){
        //     for(int j=i; j<n; j++){
        //         int sum=0;
        //         for(int k=i ; k<=j; k++){
        //             sum += nums[k];
        //             maxx=max(maxx,sum);
        //         }
        //     }
        // }
        // return maxx;


        //better solution
        // int maxx=-1e9;
        // int n=nums.size();
        // for(int i =0; i<n; i++){
        //     int sum=0;
        //     for(int j=i; j<n; j++){
        //             sum += nums[j];
        //             maxx=max(maxx,sum);
        //     }
        // }
        // return maxx;


        // optimal solution
        //kadans algo
        int maxx=-1e9;
        int sum=0;  
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            maxx=max(maxx,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxx;
    }
};
