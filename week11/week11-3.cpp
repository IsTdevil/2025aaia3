class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0;
        for (int bill : bills) {
            if (bill==5) d5++;
            if (bill==10) {
                if (d5 < 1) return false;
                d10++;
                d5--;
            }
            if (bill==20) {
                if (d10>0 && d5>0) {
                    d20++;
                    d10--;
                    d5--;
                }else if (d5>=3) {
                    d20++;
                    d5 -= 3;
                }else return false;
            }
        }
        return true;
    }
};
