class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n=nums.length;
        int ans[]=new int[n];
        int pre[]=new int[n];
        int sur[]=new int[n];
        pre[0]=1;
        sur[n-1]=1;
        //preffix calculate
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]*nums[i-1];
        }
        //surffix calculate
        for(int i=n-1;i>0;i--)
        {
            sur[i-1]=sur[i]*nums[i];
        }
        //result
        for(int i=0;i<n;i++)
        {
            ans[i]=pre[i]*sur[i];
        }
        return ans;
    }
}
