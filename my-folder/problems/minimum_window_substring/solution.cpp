class Solution {
public:
    string minWindow(string s, string t) {
         string ans ;
  int start=0,end=0;
  map<char,int>m;
  for(int i=0; i<t.length(); i++) ++m[t[i]] ;
  int ctr=m.size();
  int minsize=INT_MAX;
  if(s==t) return s;
  if(s.length() < t.length())
  return "" ;
  while(end<s.length())
  {
    if(ctr>0)
    {
      if(m.find(s[end]) != m.end())
      {
        m[s[end]]-- ;
        if(m[s[end]]==0)
        ctr-- ;
        
      }
      end++;
    }

    while(ctr==0)
    {
          if(ctr==0)
          if((end-start)<minsize)
            minsize=end-start , ans=s.substr(start, minsize);
          if(m.find(s[start])==m.end() )
          {
            start++;

          }
          else
          {
            ++m[s[start]] ;
            if(m[s[start]]>0 )
            {

              ctr++;
            }
            start++;
          }





    }


  }
  //cout<<start<<end<<endl;
  return ans;
    }
};