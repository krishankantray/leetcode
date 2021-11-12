/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
    public:
        int bsearch(int start,int end){
            if(start>end) return -1;
            if(guess(start)==0) return start;
            if(guess(end)==0) return end;
            int mid = start+(end-start)/2;
            if(guess(mid)==0) return mid;
            else if(guess(mid)==-1) return bsearch(start+1,mid-1);
            else return bsearch(mid+1,end-1);
        }
        int guessNumber(int n) {
        return bsearch(1,n);
    }

};