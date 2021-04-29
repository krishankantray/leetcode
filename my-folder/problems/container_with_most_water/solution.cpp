class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0, h=n-1, ans=INT_MIN ;
        while(l<h){
            if(height[l]<height[h]){
                ans=max(ans, height[l]*(h-l)) ;
                l++ ;
            }
            else{
                ans = max(ans, height[h]*(h-l)); 
                h-- ;
            }
        }
    return ans ;
    }
};