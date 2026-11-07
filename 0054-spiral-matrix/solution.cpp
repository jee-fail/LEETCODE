class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0, right=m-1, top=0, bot=n-1;

        vector<int> ans;
        
        while(top<=bot && left<=right){
            //right
        for(int i=left; i<=right; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;

        //bot
        for(int i=top; i<=bot; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;

        //left
        if(top<=bot){
            for(int i=right; i>=left; i--){
                ans.push_back(matrix[bot][i]);
            }
            bot--;
        }

        //top
        if(left<=right){
            for(int i=bot;i>=top; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        }

        return ans;
    }
};
