class Solution {
public:
    double power(double x, long long n){
            if(n==0){
                return 1;
            }

            double half=power(x,n/2);

            if(n%2==0){
                return half * half;
            }
            else{
                return x * half *half;
            }
        }

    double myPow(double x, int n) {

        // without recursion
    
        // double ans=1.0;
        // long long nn=n;
        // if(nn < 0)
        // nn = -1 * nn;
        // while(nn){
        //     if(nn%2){
        //         ans=ans*x;
        //         nn = nn - 1;
        //     }else{
        //         x= x * x;
        //         nn=nn/2;
        //     }
        // }
        // if(n<0)
        // ans= (double)(1.0)/ (double)(ans);
        // return ans;

        //using recursion

        long long nn=n;
        if(n<0){
            return 1.0/power(x,-nn);
        }
        return power(x,nn);
        
    }
};
