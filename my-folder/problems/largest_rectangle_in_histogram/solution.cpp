class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size() ; 
        int minRight[n];
        minRight[n-1]=n ;
        int minLeft[n];
        minLeft[0]=-1 ;
        stack<int>s ;
        // right min
        s.push(n-1) ; 
        for(int i=n-2; i>=0; i--){
            if(!s.empty() && heights[s.top()] < heights[i]){
                minRight[i] = s.top() ;
                s.push(i);
            }
            else{
                while(!s.empty() && heights[s.top()] >= heights[i]) s.pop() ;
                if(s.empty()) 
                    minRight[i] = n ; 
                else minRight[i]=s.top();
                s.push(i);
            }
        }
        
        // min left
        while(!s.empty()) s.pop() ; 
        s.push(0) ; 
        for(int i=1; i<n; i++){
            if(!s.empty() && heights[s.top()]<heights[i]){
                minLeft[i]=s.top() ; 
                s.push(i);
            }
            else{
                while(!s.empty() && heights[s.top()]>heights[i]) s.pop() ; 
                if(s.empty()) minLeft[i]=-1 ;
                else minLeft[i]=s.top() ;
                s.push(i) ; 
            }
        }
        
        // calculating histogram 
        int ans = INT_MIN ; 
        for(int i=0; i<n; i++){
            int l = minLeft[i] ;
            int r = minRight[i] ;
            ans = max(ans, (r-l-1)*heights[i]) ; 
        }
        return ans; 
    }
};