class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,vol=0,cal;
        while(i<j){
            if(height[i]>=height[j]){
                cal=height[j]*(j-i);
                j--;
            }
            else{
                cal=height[i]*(j-i);
                i++;
            }
            if(vol<cal){
                vol=cal;
            }
        }
        return vol;
    }
};