class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = 0, e = matrix.size()-1, m, l = matrix[0].size()-1;
        while(s<=e){
            m = (e+s)/2;
            if(matrix[m][l]==target){
                return true;
            }
            int ins = 0, ine = matrix[m].size()-1;
            while(ins<=ine){
                int inm = (ine+ins)/2;
                if(matrix[m][inm]==target){
                    return true;
                }
                else if(matrix[m][inm]<target){
                    ins = inm+1;
                }
                else if(matrix[m][inm]>target){
                    ine = inm-1;
                }
            }
            if(matrix[m][l]<target){
                s = m+1;
            }
            else if(matrix[m][l]>target){
                e = m-1;
            }
        }
        cout<<m<<" ";
        cout<<m<<" ";
        return false;

    }
};