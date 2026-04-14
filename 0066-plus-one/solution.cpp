// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int sum=0;
//         int j=0;
//         for( int i=digits.size()-1; i>=0; i++){
//             sum= sum=i*pow(10,j);
//             j++;
//         }
//         sum=sum+1;
//         while(sum>0){
//             sum=sum%10
            
//         }
//     }
// };


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      for(int i=digits.size()-1; i>=0; i--){
        if(digits[i]<9){
        digits[i]=digits[i]+1;
        return digits;
        }
        digits[i]=0;
      }
      digits.insert( digits.begin(),1);
      return digits;
    }
};
