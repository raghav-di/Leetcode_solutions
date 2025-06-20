class Solution {
    // bool isdigit(string n){
    //     if((int))
    // }
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;

        for(string ch : operations){
            if(ch=="C"){
                stk.pop();
            }
            else if(ch=="+"){
                int first = stk.top();
                stk.pop();
                int second = stk.top();
                stk.push(first);
                stk.push(first+second);
            }
            else if(ch=="D"){
                stk.push(2*stk.top());
            }
            else{
                stk.push(stoi(ch));
            }
        }
        int sum = 0;
        while(stk.size()!=0){
            sum += stk.top();
            stk.pop(); 
        }
        return sum;
    }
};