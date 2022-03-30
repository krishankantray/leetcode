class Solution {
public:
    int recur(int startValue, int target) {
        if(target==startValue) return 0;
        if(startValue>target) return startValue-target;
        if(target%2==0) 
            return 1+recur(startValue, target/2);
        return 1+recur(startValue, target+1);
        
    }
    int brokenCalc(int startValue, int target) {
        return recur(startValue, target);
    }
};