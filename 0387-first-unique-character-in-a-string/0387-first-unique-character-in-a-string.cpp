class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> chars;
        for(int i = 0; i<26; i++){
            char ch = i+97;
            chars[ch] = 0;
        }
        deque<char> q;
        for(int i = 0; i<s.size(); i++){
            char ch = s[i];
            q.push_front(ch);
            chars[ch]++;
        }
        int idx = 0;
        while(!q.empty()&&chars[q.back()]!=1){
            q.pop_back();
            idx++;
        }
        return (idx<s.size())? idx:-1;
    }
};