class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        int count = 0, temp = x;
        while(temp>0){
            count++;
            temp >>= 1;
        }
        int res = 0;
        for(int i = (count)/2; i>=0; i--){
            res |= 1<<i;
            if((long long)res*res>x){
                res ^= (1<<i);
            }
        }
        return res;
    }
};