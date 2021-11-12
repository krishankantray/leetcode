class Solution {
public:
    int mySqrt(int x) {
        long int l=1, r=x, m=(l+r)/2;
        while(l<=r){
            m=(l+r)/2;
            if(m*m == x) return m;
            if(m*m < x) l=m+1;
            else r=m-1;
        }
        return r;
    }
};