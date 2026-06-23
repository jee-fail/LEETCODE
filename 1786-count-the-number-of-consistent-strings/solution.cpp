class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        // vector<int> freq(26, 0);
        // // m1 without hashing 
        // for(char c : allowed)
        //     freq[c - 'a'] = 1;

        // int ans = 0;

        // for(string word : words) {
        //     bool ok = true;

        //     for(char c : word) {
        //         if(freq[c - 'a'] == 0) {
        //             ok = false;
        //             break;
        //         }
        //     }

        //     if(ok)
        //         ans++;
        // }

        // return ans;


        // m2 with the help of unordered_mp

        unordered_set<char> st(allowed.begin(),allowed.end());
        int count=0;

        for(string& word:words) {
            bool ok=true;

            for(char c:word) {
                if(st.find(c)==st.end()) {
                    ok=false;
                    break;
                }
            }

            if(ok)
                count++;
        }

        return count;
    }
};

