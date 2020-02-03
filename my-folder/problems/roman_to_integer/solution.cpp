class Solution {
public:
    int val(char x){
        switch(x){
                
              case 'I' : return 1 ;
                break;
              case 'V' : return 5 ; break ;
              case 'X' : return 10 ; break ;
              case 'D' : return 500 ; break ;
              case 'M' : return 1000 ; break ;
            case 'C' : return 100 ; break; 
                case 'L' : return 50 ; break; 
        }
        return 0;
    }
    
    
    int romanToInt(string s) {
        int len=s.length();
        int ans=val(s[len-1]); 
        for(int i=len-2; i>=0; i--){
            if(val(s[i])<val(s[i+1])){
                ans=ans-val(s[i]);
            }
            else
                ans=ans+val(s[i]);
        }
        return ans ;
    }
};