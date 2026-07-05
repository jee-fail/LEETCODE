class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> sumbyrange(10,0);
        for(int i=0; i< nums.size(); i++){
            int num=nums[i];
            int original=num;
            int maxdigit=0;
            int mindigit=9;
            while(num){
                maxdigit=max(maxdigit,num%10);
                mindigit=min(mindigit,num%10);
                num/=10;
            }
            sumbyrange[maxdigit-mindigit]+=original;
        }
        for(int range=9;range>=0;range--){
            if(sumbyrange[range]!=0)
            return sumbyrange[range];
        }
        return 0;
    }
};
