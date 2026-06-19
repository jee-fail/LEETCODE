class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int highest=0;
        int n=gain.size();
        int ans=0;
        for( int i=0; i<n; i++ ){
            highest+=gain[i];
            ans=max(ans,highest);
        }
        return ans;
    }
};
