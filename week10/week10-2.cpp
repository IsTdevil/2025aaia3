class Solution {
public:
    double average(vector<int>& salary) {
        double total =0;
        int N = salary.size();
        int M = salary[0], m = salary[0];
        for(int i=0; i<N; i++){
            total += salary[i];
            if(salary[i]>M) M = salary[i];
            if(salary[i]<m) m = salary[i];
        }
        return(total - M - m)/(N-2);
    }
};
