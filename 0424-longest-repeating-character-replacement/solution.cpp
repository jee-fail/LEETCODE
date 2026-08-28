class Solution {
public:
    int characterReplacement(string s, int k) {

        // // idea is : length - maxfreq <= k;

        // int right=0, left=0, maxlen=0, maxfreq=0;
        // vector<int> mp(26 ,0);
        // while(right < s.size()){
        //     mp[s[right]-'A']++;
        //     maxfreq=max(maxfreq,mp[s[right]-'A']);
        //     while((right-left+1)-maxfreq > k){
        //         mp[s[left]-'A']--;
        //         maxfreq=0;
        //         for(int i=0; i<25; i++){
        //             maxfreq=max(maxfreq, mp[i]);
        //         }
        //         left=left+1;
        //     }
        //     if((right-left+1)-maxfreq <= k){
        //             maxlen=max(maxlen, right-left+1);
        //     }
        //     right++;
        // }
        // return maxlen;


        // idea is : length - maxfreq <= k;

        int right=0, left=0, maxlen=0, maxfreq=0;
        vector<int> mp(26 ,0);
        while(right < s.size()){
            mp[s[right]-'A']++;
            maxfreq=max(maxfreq,mp[s[right]-'A']);
            if((right-left+1)-maxfreq > k){
                mp[s[left]-'A']--;
                left=left+1;
            }
            if((right-left+1)-maxfreq <= k){
                    maxlen=max(maxlen, right-left+1);
            }
            right++;
        }
        return maxlen;
    }
};
