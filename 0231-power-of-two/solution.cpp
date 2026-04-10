class Solution {
public:
    bool isPowerOfTwo(int n) {
        //m1 with properties n and n-1 of AND give 0
        // return (n>0 && ((n & (n-1))==0));

       // m2 with log mathematics
    //    if(n>0){
    //     int s=log2(n);
    //     if(pow(2,s)==n){
    //     return true;
    //     }
    //     else false;
    //     }
    //     return 0;

    // m3 with dividing ways 
        // while(n>1){
        //     if(n%2==1) return false;
        //     n=n/2;
        // }
        // if(n==1) return true;
        // return false;


        //m4  using left shifthing method

        int count=0;
        if (n<=0) return false;
        for(int i=0; i<32; i++){
            if(((1<<i)&n)>=1){
                count++;
            }
        }
        return !(count>=2);

    }
};
