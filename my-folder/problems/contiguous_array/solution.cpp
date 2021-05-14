class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size() ; 
        if(n==1) return 0; 
        map<int,int>mp;  // sum => index
        int sum=0 ;
        int ans = 0 ; 
        for(int i=0; i<n; i++){
            sum+= ( nums[i]==1 ? 1 : -1 ) ; 
            if(sum==0) ans = max(ans, i+1) ; 
            if(mp.find(sum)==mp.end()){
                mp[sum]=i ;
            }
            else{
                ans=max(ans, i-mp[sum]) ;
                //cout<<"here->"<<sum<<endl;
            }
        }
        //for(auto i:mp) cout<<endl<<i.first<<" : "<<i.second ; 
        return ans ; 
    }
};