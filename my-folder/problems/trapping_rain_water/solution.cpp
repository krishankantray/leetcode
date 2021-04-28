class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size() ;
        int l=0, h=n-1, sum=0 ;
        int lmx=INT_MIN, rmx=INT_MIN ; 
        while(l<h){
            if(arr[l]<arr[h]){
                if(arr[l]>lmx) 
                    lmx=arr[l] ;
                else
                    sum+=(lmx-arr[l]) ;
            l++;         
            }
            else{
                if(arr[h]>rmx)
                    rmx=arr[h] ;
                else 
                    sum+= (rmx-arr[h]) ; 
                h--;     
            }
        }
        return sum;
    }
};