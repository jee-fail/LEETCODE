class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int ans=0;
        unordered_map<int,int > mp;
        int n=answers.size();
        for(int i=0; i<n; i++){
            mp[answers[i]]++;
        }
        for (auto it : mp){
            int key=it.first;
            int value=it.second;

            int group=ceil((double)value/(key+1));
            ans=ans+group*(key+1);
        }
        return ans;
    }
};
