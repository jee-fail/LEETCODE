class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ans=0;
        for(int i=0;i<=citations.size()+1;i++){
            int count=0;
            for ( int j=0; j<citations.size();j++){
                if (i<=citations[j]){
                count++; 
                }
            }
            // if (count>=i){
            //     ans=i;
            // }
            if(count<i){
                return i-1;
            }
        }
        return ans;
    }

};
