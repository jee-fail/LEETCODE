class Solution {
public:
    // brute force

    // bool isvalid(string s){
    //     int balance =0;
    //     for(char c: s){
    //         if (c=='('){
    //             balance++;
    //         }else{
    //             balance--;
    //         }
    //         if(balance<0){
    //             return false;
    //         }
    //     }
    //     return balance==0;
    // }

    // void generate(string curr, int n, vector<string>& ans){
    //     if(curr.size()== 2*n){
    //         if(isvalid(curr)){
    //             ans.push_back(curr);
    //         }
    //         return ;
    //     }

    //     generate(curr + '(', n, ans);
    //     generate(curr + ')', n, ans);
    // }
    // vector<string> generateParenthesis(int n) {
    //     vector<string> ans;
    //     generate("" , n, ans);
    //     return ans;




    // backtracking

    // void solve(int open, int close, int n,string curr, vector<string>& ans){
    //     if ( curr.size()== 2* n){
    //         ans.push_back(curr);
    //         return ;
    //     }
    //     if (open<n){
    //         solve(open+1, close,n, curr+'(', ans);
    //     }if(close< open){
    //         solve(open , close+1, n , curr + ')', ans);
    //     }

    // }

    // vector<string> generateParenthesis(int n) {
    // vector< string > ans;
    // solve(0,0,n,"",ans);
    // return ans;

    vector<string> generateParenthesis(int n) { 
        vector<vector<string>> dp(n+1);

        dp[0]={""};

        for( int pairs=1; pairs<=n; pairs++){
            for(int i=0; i< pairs; i++){
                for(string inside : dp[i]){
                    for(string after : dp[pairs -1 -i]){
                        dp[pairs].push_back("(" + inside + ")" + after);
                    }
                }
            }
        }
        return dp[n];
    }
};
