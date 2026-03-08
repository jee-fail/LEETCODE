class Solution {
    public boolean isPalindrome(int x) {
        int rev=0,rem;
        int original=x;
        if (x<0)
        return false;
        else
        while(x!=0){
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(original==rev)
        return true;
        else 
        return false;
    }
}
