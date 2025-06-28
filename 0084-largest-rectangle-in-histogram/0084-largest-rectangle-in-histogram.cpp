class Solution {
    vector<int> nextSmallElement(vector<int> arr, int n){
        stack<int> s;
        vector<int> next(n);
        s.push(-1);
        for(int i = n-1; i>=0; i--){
            while(s.top()!=-1&&arr[s.top()]>=arr[i]){
                s.pop();
            }
            next[i] = s.top();
            s.push(i);
        }
        return next;
    }
    vector<int> prevSmallElement(vector<int> arr, int n){
        stack<int> s;
        vector<int> prev(n);
        s.push(-1);
        for(int i = 0; i<n; i++){
            while(s.top()!=-1&&arr[s.top()]>=arr[i]){
                s.pop();
            }
            prev[i] = s.top();
            s.push(i);
        }
        return prev;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n);
        next = nextSmallElement(heights, n);
        vector<int> prev(n);
        prev = prevSmallElement(heights, n);
        int area = INT_MIN; //change to 0
        for(int i = 0; i<n; i++){
            int l = heights[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int b = next[i]-prev[i]-1;
            area = max(area,l*b);
        }
        return area;
    }
};