class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return;
        bool flag=false;
        for(int i=n-2; i>=0; i--){
            int mn=INT_MAX;
            int mn_j=-1;
            for(int j=i+1; j<n; j++){
                if(nums[j]>nums[i]){
                    mn=min(mn, nums[i]);
                    mn_j=j;
                }
            }
            if(mn_j!=-1){
                swap(nums[i], nums[mn_j]);
                sort(next(nums.begin(),i+1), nums.end());
                flag=true;
                break;
            }
        }
        if(flag) return;
        sort(nums.begin(), nums.end());
        return;
    }
};