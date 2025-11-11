class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int up=0, down=M-1, left=0, right=N-1;
        vector<int> ans;
        while (up<=down && left<=right){
            for(int i=left; i<=right; i++){
                ans.push_back(matrix[up][i]);
            }
            up++;

            for(int i=up; i<=down; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            if(!(up<=down && left<=right)) break;

            for(int i=right; i>=left; i--){
                ans.push_back(matrix[down][i]);
            }
            down--;

            for(int i=down; i>=up; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};
