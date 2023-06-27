class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size()-1;
        int rowstart = 0;
        while(rowstart < n && m>=0){
            if(matrix[rowstart][m] == target) return true;
            if(matrix[rowstart][m] >target){
                m--;
            }
            else{
                rowstart++;
            }
        }
        return false;
    }
};