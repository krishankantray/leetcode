class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
       vector<double>ans;
        multiset<int>window(nums.begin(), nums.begin()+k);
        auto mid=next(window.begin(), (k-1)/2);
        for(int i=k; i<=nums.size(); i++)
        {
            
            long long int xx =  static_cast<long long int>(*mid) +static_cast<long long int>(*next(mid,(k%2==0))) ;
            
            double val = static_cast<double>(xx)/2.0 ; 
            //cout<<*mid<<" "<<*next(mid,(k%2==0))<<endl;
            ans.push_back(val);    
            //window.erase(lower_bound(window.begin(),window.end(),nums[i-k]));
            if(i>=nums.size()) break;
            window.insert(nums[i]);
      if (nums[i] < *mid) --mid; 
      if (nums[i - k] <= *mid) ++mid;
      window.erase(window.lower_bound(nums[i - k]));
        }
        
        return ans;
    }
};