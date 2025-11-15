class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1){
            return 1;
        }
        unordered_map<char, int> m;
        for(int i = 0; i<26; i++){
            char c = 97+i;
            m[c] = 0;
        }
        int i = 0, j = 0, size = s.size(), maxl  = 0;
        while(j<size){
            cout<<s[j];
            // if(m[s[j]] == 0){
                m[s[j]]++;
            // }
            // else{
                while(m[s[j]] > 1){
                    // s[j] != s[i];
                    m[s[i]]--;
                    i++;
                }
            // }
            maxl = max(j-i+1,maxl);
                j++;
        }
        return maxl;
    }
};