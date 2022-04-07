class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> max_wt;
        int n=stones.size();
        for(int i=0; i<n; i++){
            max_wt.push(stones[i]);
        }
        while(n>1){
            int a = max_wt.top();
            max_wt.pop();
            int b = max_wt.top();
            max_wt.pop();
            n-=2;
            if(a-b>0){
                max_wt.push(a-b);
                n+=1;
            }
        }
        cout<<max_wt.size()<<endl;
        return max_wt.empty() ? 0 : max_wt.top();
    }
};