// class Solution {
// public:
//     int mirrorDistance(int n) {
//         int reverse=0;
//         int original=n;
//         while(n>0){
//             reverse=reverse*10  + n%10;
//             n=n/10;
//         }
//         return abs(original-reverse);
//     }
// };


class Solution {
public:
    int revnum( int a){
        if ( a / 10 == 0) return a;
        string s = to_string(a);
        reverse(s.begin(), s.end());
        return stoi(s);
    }
    int mirrorDistance(int n) {
        return abs(n-revnum(n));
    }
};
