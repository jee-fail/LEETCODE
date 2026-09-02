class Solution {
public:
    string minWindow(string s, string t) {
        int left=0, right=0, minlen=1e9, count=0,n=s.size(), m=t.size(),s_idx=-1;

        unordered_map<char,int> mp;

        for(int i=0; i<m; i++){
            mp[t[i]]++;
        }
        while(right < n){
            if(mp[s[right]]>0){
                count++;
            }
            mp[s[right]]--;
            while(count==m){
                if(right-left+1 < minlen){
                    minlen=right-left+1;
                    s_idx=left;
                }
                mp[s[left]]++;
                if(mp[s[left]]>0) count=count-1;
                left++;
            }
            right=right+1;
        }
        return s_idx== -1 ? "" : s.substr(s_idx,minlen);
    }
};
