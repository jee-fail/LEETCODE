class Solution {
public:
    // int solve(int n){
    //     if(n<=1)
    //     return n;

    //     return solve(n-1) + solve(n-2);
    // }
    int fib(int n) {
        int a=0;
        int b=1;
        int fibo=0;
        if(n<=1) return n;
        for(int i=2;i<=n;i++){
            fibo=a+b;
            a=b;
            b=fibo;
        }
        return fibo;
    }
};
