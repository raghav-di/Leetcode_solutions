class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        // vector<int> nums;
        // for(int i = 1; i<=x/2; i++){
        //     nums.push_back(i);
        // }
        int s = 1, e = x/2, m, ans;
        while(s<=e){
            cout <<s<<" "<<e<<" /";
            m = (e+s)/2;
            long long t =(long long ) m*m;
            if(t<=x){
                ans = m;
            }
            cout<<" a"<<ans<<" t"<<t;
            s = (t<=x)? m+1:s;
            e = (t>=x)? m-1:e;
        }
        return ans;
    }
};