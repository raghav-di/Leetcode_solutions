class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1){
            return 1;
        }
        int l = 0, maxl = 0;
        unordered_map<char, int> m;
        for(int r = 0; r<s.size(); r++){
            m[s[r]]++;
            while(m[s[r]]>1){
                m[s[l]]--;
                l++;
            }
            maxl = max(r-l+1, maxl);
        }
        return maxl;
    }
};