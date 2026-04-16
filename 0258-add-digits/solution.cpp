// class Solution {
// public:
//     int addDigits(int num) {
//         while(num>9){
//             int sum=0;
//             while(num>0){
//             sum=sum+num%10;
//             num=num/10;
//             }
//             num=sum;
//         }
//         return num;
//     }
// };

// IT IS BASED ON RETURN 
class Solution {
public:
    int addDigits(int num) {
        if (num == 0)
            return 0;
        if (num % 9 == 0)
            return 9;
        return num % 9;
    }
};
