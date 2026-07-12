class Solution {
public:
    bool solve( string &s , int left , int right){
        if ( left>=right ){
            return true;
        }

        if(!isalnum(s[left]))
        return solve(s,left+1, right);

        if(!isalnum(s[right]))
        return solve( s, left, right - 1);

        if(tolower(s[left]) != tolower(s[right]))
        return false;

        return solve( s, left+1, right-1);

    }
    
    bool isPalindrome(string s) {

        //broute force 
        // string b="";
        // string rev="";
        // for(int i=0; i<s.size();i++){
        //     if((s[i]>=97 && s[i]<=122)||(s[i]>='0' && s[i]<='9')||(s[i]>=65 && s[i]<=90)){
        //         if(s[i]>=65 && s[i]<=90){
        //             s[i]=s[i]+32;
        //         }
        //         b += s[i];
        //     }
        // }
        // for(int i=b.size()-1;i>=0;i--){
        //     rev += b[i];
        // }
        // cout<<b<<" "<<rev<<endl;
        // return b == rev;


        //optimal solution with left and right 

        // int left=0;
        // int right=s.size()-1;

        // while( left < right ){
        //     while( left< right && !isalnum(s[left]))
        //     left++;
        //     while(left< right && !isalnum(s[right]))
        //     right--;
        //     if(tolower(s[left]) != tolower(s[right]))
        //     return false;

        //     left++;
        //     right--;
        // }
        // return true;

        // usign recursion

        return solve( s, 0 , s.size()-1);
    }
};
