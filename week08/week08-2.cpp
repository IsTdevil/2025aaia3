class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), N=matrix[0].size();
        vector<int> markI(M,0), markJ(N,0);
        for(int i=0; i<M;i++){
            for(int j=0; j<N;j++){
                if(matrix[i][j]==0){
                   markI[i]=1;
                   markJ[j]=1;
                }
            }
        }
        for(int i=0; i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j]=0;
            }
        }
    }
};
