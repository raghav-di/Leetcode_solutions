class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1){
            return false;
        }
        stack<char> stk;
        for(char ch : s){
            if(ch=='('||ch=='{'||ch=='['){
                stk.push(ch);
            }
            else{
                if(stk.size()==0&&(ch==')'||ch=='}'||ch==']')){
                    return false;
                }
                char top = stk.top();
                if(ch==')'&&top=='('){
                    stk.pop();
                }
                else if(ch=='}'&&top=='{'){
                    stk.pop();
                }
                else if(ch==']'&&top=='['){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
        }
        return (stk.size()!=0)?false:true;
    }
};