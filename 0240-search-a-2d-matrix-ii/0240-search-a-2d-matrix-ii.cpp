class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int j = 0, i = matrix[0].size()-1;
        while(i>=0&&j<matrix.size()){
            if(target==matrix[j][i]){
                return true;
            }
            else if(target<matrix[j][i]){
                i--;
            }
            else{
                j++;
            }
        }
        return false;
    }
};