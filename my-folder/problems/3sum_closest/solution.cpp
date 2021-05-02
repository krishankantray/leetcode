class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        int n= arr.size();
        int diff = INT_MAX ; 
        int ans = INT_MAX ; 
        sort(arr.begin(), arr.end()); 
        
        for(int i=0; i<n; i++){
            int l=i+1, h=n-1 ; 
            while(l<h){
                int sum = arr[i] + arr[l] + arr[h] ; 
                if(sum==target) return sum; 
                if(abs(target-sum)< diff){
                    diff = abs(target-sum) ;
                    ans = sum; 
                }
                if(sum<target){
                    l++;
                }
                else {
                    h-- ; 
                }
            }
        }
        return ans ; 
    }
};