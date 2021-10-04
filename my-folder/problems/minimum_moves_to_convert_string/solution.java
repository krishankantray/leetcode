class Solution {
    public int minimumMoves(String s) {
        int n=s.length();
        int ans=0; 
        for(int i=0; i<n; i++){
            if(s.charAt(i)=='O') continue ; 
            else {
                // System.out.println(i);
                ans++;
                i+=2 ; 
            }
        }
        return ans; 
    }
}