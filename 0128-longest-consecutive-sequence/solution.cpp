class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

    //     if(nums.empty()) return 0;
        
    //     sort(nums.begin(),nums.end());


    //     int longest=1;
    //     int count=0;
    //     int n=nums.size();
    //     int lastSmaller=-1e9;

    //     for( int i=0; i<n; i++){
    //         if( nums[i]-1==lastSmaller){
    //             count++;
    //             lastSmaller=nums[i];
    //         }

    //         else if(nums[i]!=lastSmaller){
    //             count=1;
    //             lastSmaller=nums[i];
    //         }
    //         longest=max(longest,count);
    //     }
    //     return longest;

    // m2 using map
    map<int, int > mp;
    for(int x:nums) {
            mp[x]=1;
        }
    int longest = 0;

        for(auto it : mp) {
            int num = it.first;
            if(mp.find(num -1)==mp.end()) {
                int curr=num;
                int count=1;

                while(mp.find(curr +1)!= mp.end()) {
                    curr++;
                    count++;
                }
                longest = max(longest,count);
            }
        }
        return longest;
    }
};
