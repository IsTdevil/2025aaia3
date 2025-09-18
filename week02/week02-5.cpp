class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};//陣列宣告, 陣列用大括號的預設值0
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            A[c]++;
        }
        for(int i=0; i<t.length(); i++){
            char c = t[i];
            A[c]--;
            if(A[c] <0) return c;
        }
        return 0;
    }
};
