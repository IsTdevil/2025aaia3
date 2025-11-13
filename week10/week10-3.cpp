class Solution {
public:
    int helper(char c){
        if(c=='I')return 1;
        if(c=='V')return 5;
        if(c=='X')return 10;
        if(c=='L')return 50;
        if(c=='C')return 100;
        if(c=='D')return 500;
        if(c=='M')return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int total =0,prev = 0, now = 0;
        for(int i=0; i<s.length();i++){
            prev = now;
            now = helper( s[i] );
            if(prev < now) total = total - prev - prev + now;
            else total +=now;
        }
        return total;
    }
};
