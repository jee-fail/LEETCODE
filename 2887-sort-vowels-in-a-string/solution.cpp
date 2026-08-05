class Solution {
public:
    bool isvowel(char ch){
       return ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ;
    }
    

    string sortVowels(string s) {
        vector<int> freq(128,0);

        for(char ch : s){
            if(isvowel(ch))
            freq[ch]++;
        }

        int ascii='A';

        for( int i=0; i<s.size(); i++){
            if(!isvowel(s[i]))
            continue;

            while( ascii<128 && freq[ascii]==0)
            ascii++;

            s[i]=char(ascii);
            freq[ascii]--;
        }
        return s;
    }
};
