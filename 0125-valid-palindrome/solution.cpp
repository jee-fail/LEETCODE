class Solution {
public:
    bool isPalindrome(string s) {
        string b="";
        string rev="";
        for(int i=0; i<s.size();i++){
            if((s[i]>=97 && s[i]<=122)||(s[i]>='0' && (s[i]<='9')||s[i]>=65 && s[i]<=90)){
                if(s[i]>=65 && s[i]<=90){
                    s[i]=s[i]+32;
                }
                b += s[i];
            }
        }
        for(int i=b.size()-1;i>=0;i--){
            rev += b[i];
        }
        cout<<b<<" "<<rev<<endl;
        return b == rev;
        
    }
};
