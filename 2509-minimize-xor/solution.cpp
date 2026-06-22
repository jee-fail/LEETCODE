class Solution{
public:
    int minimizeXor(int num1,int num2){
        int requiredBits=__builtin_popcount(num2);
        int result=0;

        for(int i=30;i>=0&&requiredBits>0;i--){
            if(num1&(1<<i)){
                result|=(1<<i);
                requiredBits--;
            }
        }

        for(int i=0;i<=30&&requiredBits>0;i++){
            if((result&(1<<i))==0){
                result|=(1<<i);
                requiredBits--;
            }
        }

        return result;
    }
};
