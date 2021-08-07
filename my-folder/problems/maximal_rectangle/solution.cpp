class Solution {
public:
    int histogram(vector<int>&arr){
        int n = arr.size();
        int leftMin[n];
        int rightMin[n];
        leftMin[0]=-1 ;
        rightMin[n-1]=n ;
        stack<int>s; 
        s.push(n-1) ; 
        // right Min
        for(int i=n-2; i>=0; i--){
            if(!s.empty() && arr[s.top()]<arr[i]){
                rightMin[i] = s.top() ;
                s.push(i) ;
            }
            else{
                while(!s.empty() && arr[s.top()]>=arr[i]) s.pop() ;
                if(s.empty())
                    rightMin[i]=n ;
                else
                    rightMin[i]=s.top() ;
                s.push(i) ;
            }
        }
        
        while(!s.empty()) s.pop() ;
        s.push(0); 
        for(int i=1; i<n; i++){
            if(!s.empty() && arr[s.top()]<arr[i]){
                leftMin[i]=s.top() ;
                s.push(i);
            }
            else{
                while(!s.empty() && arr[s.top()]>=arr[i]) s.pop() ; 
                if(s.empty())
                    leftMin[i] = -1 ;
                else
                    leftMin[i]=s.top() ;
                s.push(i) ;
            }
        }
        
        int ans=INT_MIN ;
        for(int i=0; i<n; i++){
            int l = leftMin[i] ;
            int r = rightMin[i] ;
            cout<<l<<" "<<r<<endl; 
            ans = max(ans, (r-l-1)*arr[i]) ;
        }
        return ans ; 
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int r = matrix.size();
        if(r==0) return 0 ; 
        int c = matrix[0].size() ;
        if(c==0) return 0; 
        if(r==1 && c==1) return matrix[0][0]-48; 
        vector<int> arr(c,0) ;
        int ans = INT_MIN ; 
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]=='0') arr[j]=0;
                else arr[j]+=1 ;
            }
            /*
            for(int x:arr) cout<<x<<", " ;
            cout<<endl;
            cout<<histogram(arr)<<endl; 
            cout<<"--------------"<<endl; 
            */
            ans=max(ans, histogram(arr));
        }
        return ans ; 
    }
};