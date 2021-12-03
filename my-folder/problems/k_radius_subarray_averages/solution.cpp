class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int t=2*k +1;
        int l=0,r=t-1, m=k;
        int n=nums.size();
        vector<int>ans(n, -1);
        if(r>=n) return ans;
        long long int ss=0;
        for(int i=0; i<t; i++) ss+=nums[i];
        while(r<n){
            // cout<<"l="<<l<<" r="<<r<<endl;
            ans[m]=ss/t;
            ss-=nums[l];
            l++,r++,m++;
            if(r<n) ss+=nums[r];
        }
        return ans;
    }
};