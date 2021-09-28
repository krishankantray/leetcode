class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = (uint32_t) 0;
        for(int i=0; i<32; i++){
            
            if(1&n>>i) ans+=(pow(2,31-i));
        }
        return ans;
    }
};