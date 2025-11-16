class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1 || s.size()<=1){
            return s;
        }
        vector<vector<int>> rows(numRows);

        int idx = 0, d = 1;
        for(char c: s){
            rows[idx].push_back(c);
            if(idx == 0){
                d = 1;
            }
            else if(idx == numRows-1){
                d = -1;
            }
            idx += d;
        }
        string res;
        for(const auto row: rows){
            for(char c: row){
                res += c;
            }
        }
        return res;
    }
};