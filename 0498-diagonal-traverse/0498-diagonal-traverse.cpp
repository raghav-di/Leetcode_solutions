class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int r = mat.size();
        int c = mat[0].size();
        int i = 0,j = 0;
        bool up = true;
        while(ans.size()<(r*c)){
            ans.push_back(mat[i][j]);
            if(up){
                if(j == c-1){
                    i++;
                    up = false;
                }
                else if(i==0){
                    j++;
                    up = false;
                }
                else{
                    i--;
                    j++;
                }
            }
            else{
                if(i == r-1){
                    j++;
                    up = true;
                }
                else if(j == 0){
                    i++;
                    up = true;
                }
                else{
                    i++;
                    j--;
                }
            }
        }
        return ans;
    }
};