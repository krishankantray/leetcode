class Solution {
public:
    int minimizedMaximum(int n, vector<int>& Q) {
        int L = 1, R = *max_element(Q.begin(), Q.end());
        int mid=0;
        while(L<=R){
            mid=(L+R)/2;
            int ctr=0;
            for(int it:Q){
                if(it<mid){
                    ctr++;
                }
                else{
                    float numer = (float) it;
                    float deno = (float) mid; 
                    ctr+=ceil(numer/deno);
                    // if(mid==5) cout<<ctr<<endl;
                }
            }
            // cout<<"L="<<L<<" R="<<R<<" ctr="<<ctr<<endl;
            if(ctr>n) 
                L=mid+1;
            else
                R=mid-1;
        }
        return L; 
    }
};