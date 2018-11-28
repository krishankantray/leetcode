class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
       
        map<char,int>m ;
        for(int i=0; i<p.length() ; i++ ) ++m[p[i]];
        int ctr=m.size();
        int start=0,end=0;
        
        while(end<s.length())
        {
            if(ctr>0)
            {
                if(m.find(s[end])!=m.end()){
                 m[s[end]]-- ; 
                 if(m[s[end]]==0)
                     ctr--;
                }
                
                end++ ;

            }
            while(ctr==0)
            {
                if(end-start == p.length())
                ans.push_back(start);
                //cout<<"ctr= "<<ctr<<" start= "<<start<<" end=  "<<end<<endl;
                if(m.find(s[start])!=m.end())
                {
                    m[s[start]]++;
                    if(m[s[start]] >0) ctr++;
                }
                start++;
            }
        }
        return ans;
    }
};