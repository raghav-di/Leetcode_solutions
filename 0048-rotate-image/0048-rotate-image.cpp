class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i=0;
        int size=matrix.size();
        while(i<size-1){
            for(int j=i;j<size;j++){
                int t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
                cout<<matrix[i][j];
                cout<<matrix[j][i];
            }
            i++;
        }
        for(int k=0;k<size;k++){
            int i=0;
            int j=matrix[k].size()-1;
            while(i<j){
                int t=matrix[k][i];
                matrix[k][i]=matrix[k][j];
                matrix[k][j]=t;
                i++;
                j--;
            }
        }
    }
};